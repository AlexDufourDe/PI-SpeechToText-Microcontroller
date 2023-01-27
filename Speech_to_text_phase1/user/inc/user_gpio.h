/*
 * user_gpio.h
 *
 *  Created on: Jan 19, 2023
 *      Author: felipe
 */

#ifndef USER_GPIO_H_
#define USER_GPIO_H_


#include "main.h"

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);

void ledsShowValue(int value);

#endif /* USER_GPIO_H_ */


