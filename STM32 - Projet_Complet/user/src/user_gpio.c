/*
 * user_gpio.c
 *
 *  Created on: Jan 19, 2023
 *      Author: felipe
 */

#include "user_gpio.h"

extern recording;
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(GPIO_Pin == GPIO_PIN_13) {
	  recording = !recording;
    HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, !recording);
  } else {
      __NOP();
  }
}
