/************************************************* 
*  FILE  DESCRIPTION
*------------------------------------------------
*     File: Door_sensor.c
*     Description: Contains functions of Door sensor
*
****************************************************/
#include "Door_Sensor.h"


BasType Door_GetState(u8 Copy_u8Port, u8 Copy_u8Pin )
{
	
	u8 Door_State = DIO_Read(Copy_u8Port, Copy_u8Pin) ;
	return Door_State;
	
}