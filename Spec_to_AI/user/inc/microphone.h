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


//buffer of 1 second of audio
#define AUDIO_IN_PCM_BUFFER_SIZE                   16000 /* buffer size in half-word */
//audio frequency of 16kHz
#define DEFAULT_AUDIO_IN_FREQ               (16000U)



typedef enum {
  BUFFER_EMPTY = 0,
  BUFFER_FULL,
}WR_BUFFER_StateTypeDef;

typedef struct {
  uint16_t pcm_buff[AUDIO_IN_PCM_BUFFER_SIZE];
  uint32_t pcm_ptr;
  WR_BUFFER_StateTypeDef wr_state;
  uint32_t offset;
  uint32_t fptr;
  uint32_t size;
}AUDIO_IN_BufferTypeDef;


void checkMicrophone();

#endif /* INC_USER_MICROPHONE_H_ */
