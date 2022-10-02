/************************************************* 
*  FILE  DESCRIPTION
*------------------------------------------------
*     File: ADC.h
*     Description: Contains functions prototypes and interfaces of of ADC 
*
****************************************************/
#ifndef ADC_H
#define ADC_H


enum ADC_CHANNELS {};


BaseTypes ADC_Init( u8 Copy_u8Cahnnel );

BaseTypes ADC_Read( u8 Copy_u8Cahnnel );

#endif /*ADC_H*/