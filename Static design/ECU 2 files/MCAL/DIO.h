/************************************************* 
*  FILE  DESCRIPTION
*------------------------------------------------
*     File: DIO.h
*     Description: Contains functions prototypes and interfaces of of DIO 
*
****************************************************/


#ifndef DIO_H
#define DIO_H

enum PORTS {};
enum PINS  {};
enum DIRECTIONS {};



BaseType DIO_Init(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8PinDir );

BaseType DIO_Write(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8PinValue );

BaseType DIO_Read(u8 Copy_u8Port, u8 Copy_u8Pin );


#endif