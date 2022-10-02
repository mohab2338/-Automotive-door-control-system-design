/************************************************* 
*  FILE  DESCRIPTION
*------------------------------------------------
*     File: Light_Switch.c
*     Description: Contains functions of light switches 
*
****************************************************/

#include "Light_Switch.h"

BaseType Switch_GetState( u8 Copy_u8Port, u8 Copy_u8Pin  )
{
	u8 Switch_State = DIO_Read(Copy_u8Port, Copy_u8Pin) ;
	return Switch_State;
	
}