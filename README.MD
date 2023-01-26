# Spectrogram

## Introduction 

This project captures the audio from the microphone and applies a Mel Spectrogram to it. The output of the spectogram is then writen on the SD card as a txt file and the corresponding .wav file is also saved on the SD card.

## Components
*Material*

    STM32F769I-eval
    SD card
    notebook with an SD card


*Software*

    STM32Cube IDE
    STM32CubeMX

## Structure

The project can be separated in the following parts: 
* RTC
* SD / FATFS
* GPIO interruptions / LEDS
* Audio reception + DFSDM
* Wav conversion
* Spectrogram
* main loop

## Mel Spectrogram

The opperation of the mel spectogram is properly explained in this [article](https://medium.com/analytics-vidhya/understanding-the-mel-spectrogram-fca2afa2ce53). The Mel scale represents how humans hear sounds depending on their frequency. The higher the pitch, the more difficult it is for a human to distinguish the sound. A Mel spectogram is therefore a spectrogram in three demension driven by this scale, representing the decibels for different frequencies through time.
The main purpose of this project is to recreate the mel spectrogram used for the phase 1 neural network one the STM32 card. To do so, the project has to respect the same caracteristics (following values are defined in *user/src/spectrogram.h* l13 to l18): 
* Signal sampled at 16kHz
* The signal must last exaclty 1 second, giving 16 000 values for the entry of the spectrogram
* FFT_LEN : number of Fast Fourier Transform points : 1024
* HOP_LEN : the overlap between two time samples : 256 (16 000/256 = 63 -> there will be 63 points on the time axis)
* NUM_MELS : Number of points for the frequency axis.


## Setting up and running the project

* Clone the git repository and, using STM32Cube IDE, open project from file system and select the folder "STM32 - Projet_Complet".

* If you rebuild it from the .ioc, you may have to comment a double declaration of DSFD_Init ont the dfsdm.c file.

* In the rtc.h folder, you can choose the date and time to be set on your microcontroller. If the flag SET_TIME is 0 however, it will use the time and date set in the rtc backup registers.

* To run the project, build an debug or run it using the IDE.

* Once running, it will wait until the temper (blue) button is pressed to start recording. The recording will last exactly 1s, until the audio buffer is full, or until the button is pressed again. The signal is saved in the buffer (with exactly 16 000 values) which will be converted in a Mel spectogram resulting in a list of 8064 (128x63) values wich will be written in binary on a txt file on the SD card.
  
* The define END_ZERO_PADDING detemines that, if 1, FFT_LEN zeros will be added to the end of the input buffer, wich allows for 63 time frames for an input of 16000 samples. If 0, the spectrogram will end at the end of the buffer and will have only 59 time stamps for the same input size.

* There were five different spectrogram methods that were implemented in order to run tests and decide which one is the closest to the one used in the neural netwok training:
  1. Mel scale spectrogram with normalized input and without db scale output
  2. Mel scale spectrogram without normalized input and without db scale output
  3. Mel scale spectrogram with normalized input and with db scale output
  4. Mel scale spectrogram without normalized input and with db scale output
  5. Spectrogram without Mel scale and with normalized input
 
   In the end, it was decided that the 4th method, with db scale and not normalized input is the most adapted to use for our AI.

* The *.wav* file of your recording will be saved under the name hhmmss.wav (hh : hour, mm : minute, ss : seconds).

* The files are saved in a directory named ddmmyyyy (dd : day, mm : month, yyyy : year).
