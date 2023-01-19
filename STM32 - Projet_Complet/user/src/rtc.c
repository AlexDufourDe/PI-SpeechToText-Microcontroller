
#include "user_rtc.h"
#include "main.h"

//returns a string containing current date
/*char* get_date(RTC_HandleTypeDef hrtc)
{
	 char* date;
	 RTC_DateTypeDef gDate;
	 HAL_RTC_GetDate(&hrtc, &gDate, RTC_FORMAT_BIN);
	 //converts the struct into a sctring in the format dd:mm::yyy
	 sprintf((char*)date,"%02d-%02d-%4d",gDate.Date, gDate.Month, 2000 + gDate.Year);

	 return date;
}
//returns a string containing current time
char* get_time(RTC_HandleTypeDef hrtc)
	{
	 char* time;
	 RTC_TimeTypeDef gTime;
	 HAL_RTC_GetTime(&hrtc, &gTime, RTC_FORMAT_BIN);
	 //converts the struct into a sctring in the format hh:mm::ss
	 sprintf((char*)time,"%02d:%02d:%02d",gTime.Hours, gTime.Minutes, gTime.Seconds);

	 return time;
}
*/
