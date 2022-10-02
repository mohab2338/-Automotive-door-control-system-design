/************************************************* 
*  FILE  DESCRIPTION
*------------------------------------------------
*     File: CAN.h
*     Description: Contains functions prototypes and interfaces of of CAN peripheral 
*
****************************************************/


#ifndef CAN_H_
#define CAN_H_


BaseType CAN_Init( );

BaseType CAN_Send(u8 Copy_u8Data );

BaseType CAN_Receive( );





#endif /*CAN_H_*/