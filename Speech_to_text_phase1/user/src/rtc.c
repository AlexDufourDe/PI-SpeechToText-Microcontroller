
#include "user_rtc.h"
#include "rtc.h"
#include "main.h"



extern RTC_HandleTypeDef hrtc;


//returns a string containing current date
char* get_date( char* date)
{
	 RTC_DateTypeDef gDate;
	 HAL_RTC_GetDate(&hrtc, &gDate, RTC_FORMAT_BIN);
	 //converts the struct into a sctring in the format dd:mm::yyy
	 sprintf((char*)date,"%02d%02d%02d",gDate.Date, gDate.Month, 2000 + gDate.Year);

	 return date;
}
//returns a string containing current time
char* get_time( char* time)	{
	 RTC_TimeTypeDef gTime;
	 HAL_RTC_GetTime(&hrtc, &gTime, RTC_FORMAT_BIN);
	 //converts the struct into a sctring in the format hh:mm::ss
	 sprintf((char*)time,"%02dh:%02dm:%02d",gTime.Hours, gTime.Minutes, gTime.Seconds);

	 return time;
}
//returns a string containing current time
char* get_time_filename( char* name)
	{
	 char day = 'd', month = 'm', year = 'y', hour = 'h', min = 'm', sec = 's';
	 RTC_TimeTypeDef gTime;
	 RTC_DateTypeDef gDate;
	 HAL_RTC_GetTime(&hrtc, &gTime, RTC_FORMAT_BIN);
	 HAL_RTC_GetDate(&hrtc, &gDate, RTC_FORMAT_BIN);
	 //converts the struct into a sctring in the format hh:mm::ss
	 //sprintf((char*)name,"%02d-%02d-%4d-%02dh%02dm%02ds.wav",gDate.Date, gDate.Month, 2000 + gDate.Year,gTime.Hours, gTime.Minutes, gTime.Seconds);
	 //sprintf((char*)name,"%02dh%02dm%02ds.wav",gTime.Hours, gTime.Minutes, gTime.Seconds);
	 sprintf((char*)name,"%02d%02d%02d", gTime.Hours, gTime.Minutes, gTime.Seconds);
	 return name;
}
