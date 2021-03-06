#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H__
/**
 * @file A4.h
 * @author Akilan B
 * @brief This is the Header File for activity4
 * @version 0.1
 * @date 2021-02-12
 *
 * @copyright Copyright (c) 2021
 *
 */
/**
 * Macro Definitions
 */
#define F_CPU 16000000UL     /**< set Clock Frequency of MCU is 16 MHz */
#define USART_BAUDRATE 9600 /**< set Baud rate for serial communication  */
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) /**< this is Formula to calculate UBRR value */

/**
 * Include files
 */
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Function to Set Baud rate and Enabling Rx and Tx
 *
 */
void Init_USART();

/**
 * @brief Function to Read data
 *
 * @return int The read data
 */
int Read_USART();

/**
 * @brief  Function for Writing data to display  in serial monitor
 *
 * @param[in] temp The ADC value
 */
void USARTWrite(uint16_t temp);

#endif /* __ACTIVITY4_H__ */
