#include "main.h"

#include "user/microphone.h"


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
		}
		//configures playback
		if(PlaybackStarted == 0)
		{
			if(0 != audio_drv->Play(AUDIO_I2C_ADDRESS, (uint16_t *) &PlayBuff[0], 4096))
			{
				Error_Handler();
			}
			if(HAL_OK != HAL_SAI_Transmit_DMA(&hsai_BlockA1, (uint8_t *) &PlayBuff[0], 4096))
			{
				Error_Handler();
			}
			PlaybackStarted = 1;
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
		}
		DmaLeftRecBuffCplt  = 0;
		DmaRightRecBuffCplt = 0;
	}
}
