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
#define SET_TIME_RTC 1

//these macros define the time that is going to be set in the rtc
//even though in hexadecimal format, the values should be written in decimal
#define SEC 0x0
#define MIN 0x29
#define HOUR 0x14

#define DAY 0x23
#define MONTH 0x01
#define YEAR 0x23

//returns the current date from the rtc
char* get_date();
//returns the current time from the rtc
char* get_time();
//returns a string containing current time and date
char* get_time_and_date_filename(char* name);


#endif /* INC_USER_RTC_H_ */
