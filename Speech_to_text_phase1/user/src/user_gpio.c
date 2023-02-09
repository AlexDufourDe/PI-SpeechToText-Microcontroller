/*
 * user_gpio.c
 *
 *  Created on: Jan 19, 2023
 *      Author: felipe
 */

#include "user_gpio.h"

extern int recording;
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(GPIO_Pin == GPIO_PIN_13) {
	  recording = !recording;
  } else {
      __NOP();
  }
}

void ledsShowValue(int value)
{
	 HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, !((value)&0x1));
	 HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, !((value>>1)&0x1));
	 HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, !((value>>2)&0x1));
	 HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, !((value>>3)&0x1));
}
