/************************************************* 
*  FILE  DESCRIPTION
*------------------------------------------------
*     File: Lights.h
*     Description: Contains functions prototypes and interfaces of Lights
*
****************************************************/

#ifndef LIGHTS_H_
#define LIGHTS_H_


#define LIGHTS_PIN     PIN /*choosen Pin for lights*/
#define LIGHTS_PORT    PORT /*choosen Port for lights*/

BaseType Lights_SetState( u8  Copy_u8Lights_State);

BaseType Lights_GetState( );


#endif
