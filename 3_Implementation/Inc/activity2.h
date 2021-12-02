#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__
/**
 * @file A2.h
 * @author Akilan B
 * @brief This is the Header file for A2
 * @version 0.1
 * @date 2021-12-02
 *
 * @copyright Copyright (c) 2021
 *
 */

/**
 * Include files
 */
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief This Function Initialize the registers for ADC setup
 *
 */
void Init_ADC();

/**
 * @brief This Function Gives the ADC values for the selected channel
 *
 * @param[in] ch Channel number from 0-7
 * @return uint16_t ADC value
 */
uint16_t Read_ADC(uint8_t ch);

/**
 * @brief This Function Returns the ADC value to main function
 *
 * @return uint16_t The ADC value
 */
uint16_t GetADC(void);

#endif /* __ACTIVITY2_H__ */
