# Readme MicroController

## Introduction

This repository is related to the Speech to Text project for the 9th semester industrial project at TELECOM Nancy with MINA. It corresponds to the part of the project related to the STM32 microcontroller, where we read the input from the microphone, convert it into an meli spectrogram, apply the pre-trained AI model to convert it into speech and then store it into an SD card with the time and date of recording.

## Project Structure

The project is composed of different branches, each one containing functional projects and tests and examples for each functionnality demanded for the project. The master branch then contains the complete, final version of the project.

The branches are:

- RTC: RTC configuration and consulting RTC time and date
- SD_RTC : SD and RTC configuration. Writes into an SD card a txt file with current time and date
- ia_tests : XCube AI example for executing a sinus prediction model.
- audio : Reads the input from embedded microphone and plays it on the earphones
- phase 1 complete project : Reads microphone input and saves it in the cart SD with time and date as a wav file.

## Requirements

The requirements for running this project are:

- STM32Cube IDE
- Carte STM32F769I-EVAL

## Running Project

First, clone the git repository. Then open project from filesystem and select the project folder. With your project open in your IDE build it, connect the STM32 board and select the option run.

## Operation

to be defined once the code is operational

## Authors

- BONIFAS Elisa
- Dufour Alex
- MKNARI Béchir
- NEGRELLI WOLTER Felipe
  
- Industrial Supervisor : Yoann
- Academic Supervisor : MAIMOUR Moufida