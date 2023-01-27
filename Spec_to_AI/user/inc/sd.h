/*
 * sd.h
 *
 *  Created on: Nov 28, 2022
 *      Author: felipe
 */

#ifndef INC_USER_SD_H_
#define INC_USER_SD_H_


#include "fatfs.h"
#include <string.h>

//input file path
#define INPUT_PATH "down_c.txt"

//if 1, erases the information on the SD card at launch
#define ERASE 0

 //this function writes a file in the sd card and receives as argument
//the name of the file and it's text
int writeSD (char* name, char* text);

int createFile(char* file_name);
int openFile(char* file_name);
int writeToFile( char* text, int size);
int readFile(char*buffer , int size);
int SDInit();


#endif /* INC_USER_SD_H_ */
