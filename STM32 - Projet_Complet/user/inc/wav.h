/*
 * wav.h
 *
 *  Created on: Jan 19, 2023
 *      Author: felipe
 */

#ifndef WAV_H_
#define WAV_H_


#define AUDIO_IN_PCM_BUFFER_SIZE                   4*2304*10 /* buffer size in half-word */
#define DEFAULT_AUDIO_IN_FREQ               (44100U)


typedef struct {
  uint32_t ChunkID;       /* 0 */
  uint32_t FileSize;      /* 4 */
  uint32_t FileFormat;    /* 8 */
  uint32_t SubChunk1ID;   /* 12 */
  uint32_t SubChunk1Size; /* 16*/
  uint16_t AudioFormat;   /* 20 */
  uint16_t NbrChannels;   /* 22 */
  uint32_t SampleRate;    /* 24 */

  uint32_t ByteRate;      /* 28 */
  uint16_t BlockAlign;    /* 32 */
  uint16_t BitPerSample;  /* 34 */
  uint32_t SubChunk2ID;   /* 36 */
  uint32_t SubChunk2Size; /* 40 */
}WAVE_FormatTypeDef;

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
}AUDIO_IN_BufferTypeDef;

uint32_t WavProcess_EncInit(uint32_t Freq, uint8_t *pHeader);

uint32_t WavProcess_HeaderInit(uint8_t* pHeader, WAVE_FormatTypeDef* pWaveFormatStruct, AUDIO_IN_BufferTypeDef*  BufferCtl);


#endif /* WAV_H_ */
