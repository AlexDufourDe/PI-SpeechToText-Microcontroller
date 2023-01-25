# Spectrogram

## Introduction 

This project captures the audio from the microphone and applyes a Mel Spectrogram to it. The output of the spectogram is then writen on the SD card as a txt file and the corresponding .wav file is also saved on the SD card.

## Components
*Material*

    STM32F769I-eval
    SD card
    notebook + adapting the SD card


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

The functionning of the mel spectogram is properly explained in this [article](https://medium.com/analytics-vidhya/understanding-the-mel-spectrogram-fca2afa2ce53). To put it bluntly, the Mel scale represents how humans hear sounds depending on theyre frequency. The higher the pitch, the more difficult it is for a human to distinguish two sounds. A Mel spectogram is therefore a spectrogram in three demension driven by this scale, representing the decibels for different frequency threw time.
The main purpose of this project is to recreate the mel spectrogram used for the phase 1 neural network one the STM32 card. To do so, the project has to respect the same caracteristics (following values are defined in *user/src/spectrogram.h* l13 to l18): 
* Signal sampled at 16kHz
* The signal must last exaclty 1 second, giving 16 000 values for the entry of the spectrogram
* FFT_LEN : number of Fast Fourier Transform points : 1024
* HOP_LEN : size of the segments for the time axis : 256 (16 000/256 = 63 -> there will be 63 points on the time axis)
* NUM_MELS : Number of points for the frequency axis.


## Setting up and running the project

* Clone the git repository and, using STM32Cube IDE, open project from file system and select the folder "STM32 - Projet_Complet".

* If you rebuild it from the .ioc, you may have to comment a double declaration of DSFD_Init ont the dfsdm.c file. 

* In the rtc.h folder, you can choose the date and time to be set on your microcontroller. If the flag SET_TIME is 0 however, it will use the time and date set in the rtc backup registers.

* To run the project, buld an debug or run it using the IDE.

* Once running, it will wait until the blue button is pressed to start recording. The recording will last exactly 1s. The signal is saved in the buffer (with exactly 16 000 values) wich will be converted in a male spectogram resulting in a list of 8064 (128x63) values wich will be written in binary on a txt file on the SD card. The values correpond to the mel spectrogram and every 63rd value is a new line. So if you wanted the 3rd value of line 4 you would have to get the 192th ( (4-1)x63 + 3 ) value in the list.

* The *.wav* file of your recording will also be saved under the name hhmmss.wav (hh : hour, mm : minute, ss : seconds).

* Both files are saved in a directory named ddmmyyyy (dd : day, mm : month, yyyy : year).
