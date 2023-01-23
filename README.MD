# Audio to wav

## Introduction 

This project captures the audio from the microphone and writes it to the SD card as a wav file with the time of recording.

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
* Wav convertion
* main loop

## Setting up and running the project

Clone the git repository and, using STM32Cube IDE, open project from file system and select the folder "STM32 - Projet_Complet".

If you rebuild it from the .ioc, you may have to comment a double declaration of DSFD_Init ont the dfsdm.c file. 

In the rtc.h folder, you can choose the date and time to be set on your microcontroller. If the flag SET_TIME is 0 however, it will use the time and date set in the rtc backup registers.

To run the project, buld an debug or run it using the IDE.

Once running, it will wait until the blue button is pressed to start recording. it will record until it is pressed again or the buffer is full (in 10s). It will then save the file in the format hhmmss.wav, wher hh is the hour (24h), mm is the minute and ss is the second when the recording ended. This process is repeated while microcontroller is on. It will, however, erase the SD card every time the microcontroller is reset.

The audio is mono channel and sampled at 16kHz.