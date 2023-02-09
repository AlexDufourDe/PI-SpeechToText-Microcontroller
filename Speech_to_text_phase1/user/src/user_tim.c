/*
 * user_tim.c
 *
 *  Created on: Feb 8, 2023
 *      Author: felipe
 */


#import "user_tim.h"

extern int recording;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef* htim)
{
    recording = 1;
}
