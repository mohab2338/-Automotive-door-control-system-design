/************************************************* 
*  FILE  DESCRIPTION
*------------------------------------------------
*     File: Buzzer.c
*     Description: Contains functions of Buzzer 
*
****************************************************/

#include "Buzzer.h"

BaseType Buzzer_GetState( u8 Copy_u8Port, u8 Copy_u8Pin  )
{
	u8 Buzzer_State = DIO_Read(Copy_u8Port, Copy_u8Pin) ;
	return Buzzer_State;
	
}