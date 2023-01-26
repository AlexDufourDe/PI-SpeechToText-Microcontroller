# Spectrogram to AI

## Introduction 

This project reads a list of files containing Mel scale spectrograms and applies them to a NN model 

## Components
*Material*

    STM32F769I-eval
    SD card
    notebook with SD card port


*Software*

    STM32Cube IDE
    STM32CubeMX

## Structure

The project can be separated in the following parts:

* SD / FATFS
* GPIO interruptions / LEDS
* X-Cube-AI

## Setting up and running the project

Clone the git repository and, using STM32Cube IDE, open project from file system and select the folder "STM32 - Projet_Complet".

If you rebuild it from the .ioc, you may have to comment a double declaration of DSFDM_Init in the *Core/Src/dfsdm.c* file, line 208. 

In the *Core/inc/rtc.h* file, you can choose the date and time to be set on your microcontroller. If the flag SET_TIME is 0 however, it will use the time and date set in the rtc backup registers.

To run the project, build and debug or run it using the IDE.

It will read one file at a time and run the AI model with its content as the input. the result is shown in binary by the board's four leds :

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

To move on to the next file you must press the temper (blue) button.
