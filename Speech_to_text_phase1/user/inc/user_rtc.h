/*
 * rtc.h
 *
 *  Created on: Nov 28, 2022
 *      Author: felipe
 */

#ifndef INC_USER_RTC_H_
#define INC_USER_RTC_H_

#include <stdio.h>
#include "main.h"

//if 0, the time already in the rtc will be mantained
//if 1, the rtc time will be set according to the macros
#define SET_TIME_RTC 0

//these macros define the time that is going to be set in the rtc
//even though in hexadecimal format, the values should be written in decimal
#define SEC 0x0
#define MIN 0x51
#define HOUR 0x16

#define DAY 0x27
#define MONTH 0x01
#define YEAR 0x23

//returns the current date from the rtc
char* get_date(char* date);
//returns the current time from the rtc
char* get_time(char* time);
//returns a string containing current time and date
char* get_time_filename(char* name);


#endif /* INC_USER_RTC_H_ */
