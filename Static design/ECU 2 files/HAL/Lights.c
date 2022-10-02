/************************************************* 
*  FILE  DESCRIPTION
*------------------------------------------------
*     File: Lights.c
*     Description: Contains functions of Lights
*
****************************************************/

#include Lights.h

BaseType Lights_SetState( u8  Copy_u8Lights_State)
{
	
	
	
}

BaseType Lights_GetState( )
{
	
	u8 Lights_State = DIO_Read(LIGHTS_PORT, LIGHTS_PIN) ;
	
	
	return Lights_State;
}