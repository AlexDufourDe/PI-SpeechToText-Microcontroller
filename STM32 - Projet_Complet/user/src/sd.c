#include <sd.h>
#include "main.h"

int writeSD (char* name, char* text)
{

	FRESULT res; /* FatFs function common result code */
	uint32_t byteswritten, bytesread; /* File write/read counts */
	uint8_t rtext[_MAX_SS];/* File read buffer */
	//mounitng SD card
	if(f_mount(&SDFatFS, (TCHAR const*)SDPath, 0) != FR_OK)
      {
          Error_Handler();
      }
      else
      {
    	  //creates an FAT/exFAT volume on the logical drive
          if(f_mkfs((TCHAR const*)SDPath, FM_ANY, 0, rtext, sizeof(rtext)) != FR_OK)
          {
        	  return -1;
          }
          else
          {
              //Open file for writing (Create). sets the name given by the string
              if(f_open(&SDFile, name, FA_CREATE_ALWAYS | FA_WRITE) != FR_OK)
              {
                  return -1;
              }
              else
              {
                  //Write to the text file
                  res = f_write(&SDFile, text, strlen((char *)text), (void *)&byteswritten);
                  if((byteswritten == 0) || (res != FR_OK))
                  {
                      return -1;
                  }
                  else
                  {
                      f_close(&SDFile);
                  }
              }
          }
      }
      f_mount(&SDFatFS, (TCHAR const*)NULL, 0);
      return 0;
}
