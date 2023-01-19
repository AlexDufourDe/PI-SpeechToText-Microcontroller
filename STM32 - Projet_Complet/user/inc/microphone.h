/*
 * microphone.h
 *
 *  Created on: Nov 28, 2022
 *      Author: felipe
 */

#ifndef INC_USER_MICROPHONE_H_
#define INC_USER_MICROPHONE_H_


void HAL_DFSDM_FilterRegConvHalfCpltCallback(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
void HAL_DFSDM_FilterRegConvCpltCallback(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);


void checkMicrophone();

#endif /* INC_USER_MICROPHONE_H_ */
