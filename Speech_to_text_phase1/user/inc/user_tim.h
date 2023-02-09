/*
 * user_tim.h
 *
 *  Created on: Jan 19, 2023
 *      Author: felipe
 */

#ifndef USER_TIM_H_
#define USER_TIM_H_


#include "main.h"


//////////--------------------------------

//decides if the recording starts periodically after a certain amount of time
#define TIMER 1
//the time (in seconds) between each recording is triggered
#define T_PERIOD 45
#define TRIGGER_FROM_RESET 0
//////////--------------------------------


void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef* htim);


#endif /* USER_TIM_H_ */


