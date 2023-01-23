#include "main.h"

#include "microphone.h"

#include "wav.h"

extern AUDIO_IN_BufferTypeDef  BufferCtl;

extern SAI_HandleTypeDef hsai_BlockB2;
extern DMA_HandleTypeDef hdma_sai2_b;


extern DFSDM_Filter_HandleTypeDef hdfsdm1_filter0;
extern DFSDM_Filter_HandleTypeDef hdfsdm1_filter1;
extern DFSDM_Channel_HandleTypeDef hdfsdm1_channel0;
extern DFSDM_Channel_HandleTypeDef hdfsdm1_channel1;
extern DMA_HandleTypeDef hdma_dfsdm1_flt0;
extern DMA_HandleTypeDef hdma_dfsdm1_flt1;
#define SaturaLH(N, L, H) (((N)<(L))?(L):(((N)>(H))?(H):(N)))
extern int32_t                      LeftRecBuff[2048];
extern int32_t                      RightRecBuff[2048];
extern int16_t                      PlayBuff[4096];
extern uint32_t                     DmaLeftRecHalfBuffCplt;
extern uint32_t                     DmaLeftRecBuffCplt;
extern uint32_t                     DmaRightRecHalfBuffCplt;
extern uint32_t                     DmaRightRecBuffCplt;
extern uint32_t                     PlaybackStarted;
extern AUDIO_DrvTypeDef            *audio_drv;

extern SAI_HandleTypeDef hsai_BlockA1;


//handler functions
void HAL_DFSDM_FilterRegConvHalfCpltCallback(DFSDM_Filter_HandleTypeDef *hdfsdm_filter)
{
  if(hdfsdm_filter == &hdfsdm1_filter0)
  {
    DmaLeftRecHalfBuffCplt = 1;
  }
  else
  {
    DmaRightRecHalfBuffCplt = 1;
  }
}

void HAL_DFSDM_FilterRegConvCpltCallback(DFSDM_Filter_HandleTypeDef *hdfsdm_filter)
{
  if(hdfsdm_filter == &hdfsdm1_filter0)
  {
    DmaLeftRecBuffCplt = 1;
  }
  else
  {
    DmaRightRecBuffCplt = 1;
  }
}



//verifies if thhe microphone input buffer has data and plays it back
void checkMicrophone()
{
	//check if the input buffer is full
	if((DmaLeftRecHalfBuffCplt == 1) && (DmaRightRecHalfBuffCplt == 1))
	{
		//takes the data from the receiving buffer and sends to the playing buffer
		for(int i = 0; i < 1024; i++)
		{
			PlayBuff[2*i]     = SaturaLH((LeftRecBuff[i] >> 8), -32768, 32767);
			PlayBuff[(2*i)+1] = SaturaLH((RightRecBuff[i] >> 8), -32768, 32767);

			if (BufferCtl.wr_state!= BUFFER_FULL)
			{
				BufferCtl.pcm_buff[BufferCtl.fptr]=SaturaLH((LeftRecBuff[i] >> 8), -32768, 32767);
				BufferCtl.fptr+= 1;
			}
			if (BufferCtl.fptr >= AUDIO_IN_PCM_BUFFER_SIZE)
			{
				BufferCtl.wr_state!= BUFFER_FULL;
			}

		}
		//configures playback
		if(PlaybackStarted == 0)
		{
			/*if(0 != audio_drv->Play(AUDIO_I2C_ADDRESS, (uint16_t *) &PlayBuff[0], 4096))
			{
				Error_Handler();
			}
			if(HAL_OK != HAL_SAI_Transmit_DMA(&hsai_BlockA1, (uint8_t *) &PlayBuff[0], 4096))
			{
				Error_Handler();
			}
			PlaybackStarted = 1;*/
		}
		//frees
		DmaLeftRecHalfBuffCplt  = 0;
		DmaRightRecHalfBuffCplt = 0;
	}
	if((DmaLeftRecBuffCplt == 1) && (DmaRightRecBuffCplt == 1))
	{
		for(int i = 1024; i < 2048; i++)
		{
			PlayBuff[2*i]     = SaturaLH((LeftRecBuff[i] >> 8), -32768, 32767);
			PlayBuff[(2*i)+1] = SaturaLH((RightRecBuff[i] >> 8), -32768, 32767);

			if (BufferCtl.wr_state!= BUFFER_FULL)
			{
				BufferCtl.pcm_buff[BufferCtl.fptr]=SaturaLH((LeftRecBuff[i] >> 8), -32768, 32767);
				BufferCtl.fptr+= 1;
			}
			if (BufferCtl.fptr >= AUDIO_IN_PCM_BUFFER_SIZE)
			{
				BufferCtl.wr_state!= BUFFER_FULL;
			}
		}
		DmaLeftRecBuffCplt  = 0;
		DmaRightRecBuffCplt = 0;
	}
}
