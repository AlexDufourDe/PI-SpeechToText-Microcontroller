# Phase 1 complète

## Introduction 

This project corresponds the whole phase 1 of the project running on the microcontroller. It captures a 1s audio, recognizes, in a list of ten words, the one that was said and then writes it to a text file and shows its position on the list in binary with the leds.

## Components
*Material*

    STM32F769I-eval
    SD card
    notebook with an SD card input


*Software*

    STM32Cube IDE
    STM32CubeMX

## Structure

The project can be separated in the following parts: 
* RTC
* SD / FATFS
* GPIO interruptions / LEDS
* Audio reception + DFSDM
* Spectrogram
* X-Cube-AI


## Setting up and running the project

* Clone the git repository and, using STM32Cube IDE, open project from file system and select the folder "STM32 - Projet_Complet".

* If you rebuild it from the .ioc, you may have to comment a double declaration of DSFD_Init ont the dfsdm.c file.

* In the rtc.h folder, you can choose the date and time to be set on your microcontroller. If the flag SET_TIME is 0 however, it will use the time and date set in the rtc backup registers.

* To run the project, build an debug or run it using the IDE.

* Once running, it will wait until the temper (blue) button is pressed to start recording. The recording will last exactly 1s, until the audio buffer is full, or until the button is pressed again. The signal is saved in the buffer (with exactly 16 000 values) which will be converted in a Mel spectogram resulting in a list of 8064 (128x63) values wich will be written in binary on a txt file on the SD card.
  
* The define END_ZERO_PADDING detemines that, if 1, FFT_LEN zeros will be added to the end of the input buffer, wich allows for 63 time frames for an input of 16000 samples. If 0, the spectrogram will end at the end of the buffer and will have only 59 time stamps for the same input size.

* After the recording ends, the result is shown in binary by the board's four leds :

1. Yes
2. No
3. Up
4. Down
5. Right
6. Left
7. Stop
8. Go
9. On
10. Off

* The flags EXPORT_WAV, EXPORT_TXT and EXPORT_SPEC in main.h define the types of files that will be saved on the SD card, respectfully a .wav audio file with what was recorded, a .txt with the word recognized and a binary file with the spectrogram.


* The files are saved in a directory named ddmmyyyy (dd : day, mm : month, yyyy : year) with the name hhmmss (hh : hour, mm : minute, ss : second).
