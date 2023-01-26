# Audio to wav

## Introduction 

This project uses *STM32 Cube AI* to implement the phase 1 Neural Network in the STM card and predicts the word corresponding to the mel spectrogram saved on the SD card. This means, that in order to work, the SD card must have a prebuild mel spectrogram on the SD card

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

If you rebuild it from the .ioc, you may have to comment a double declaration of DSFDM_Init in the *Core/Src/dfsdm.c* file, line 208. 

In the *Core/inc/rtc.h* file, you can choose the date and time to be set on your microcontroller. If the flag SET_TIME is 0 however, it will use the time and date set in the rtc backup registers.

By default, restarting the microcontroller or pressing the *Reset* button will not stash the formerly saved files in the SD card. However you can change this option by switching the flag value *Erase* from 0 to 1 (in the file *user/sd.h* line 16). 

To run the project, build and debug or run it using the IDE.

Once running, it will wait until the blue button (*Wakeup/Tamper* button) is pressed to start recording. It will record until it is pressed again or the buffer is full (in 10s). If you would like to increase or decrease the buffer's size, you can change the value of **AUDIO_IN_PCM_BUFFER_SIZE** in the *user/inc/wav.h* line 12. If you do, note that the sampling frequency is 16kHz, meaning that to have a recording of 10s you would have to set the buffer's value to 160 000. 
Once the recording is over the file will be saved in a directory *ddmmyyyy* (dd : day, mm : month, yyyy : year) in a file named *hhmmss.wav*, (hh : hour, mm : minutes, ss : seconds). Two different files recorded the same day will be saved in the same directory.
Pressing the blue button will start a new recording in a new file, repeating the previous process. 

The audio is mono channel and sampled at 16kHz.
