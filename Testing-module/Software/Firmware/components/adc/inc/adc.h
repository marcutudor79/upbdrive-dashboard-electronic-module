/******************************************************************************/
/* UPBDRIVE ECU-Emulator Firmware                                             */
/* All rights reserverd 2023                                                  */
/******************************************************************************/

#ifndef ADC_H
#define ADC_H

#include "../../common/inc/common.h"
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"

////////////////////////////////////////////////////////////////////////////////
////                       GLOBAL VARIABLES                                 ////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
////                       GLOBAL MACROS                                    ////
////////////////////////////////////////////////////////////////////////////////

#define ADC_VREF 3.3
#define ADC_RANGE 4096



////////////////////////////////////////////////////////////////////////////////
////                       GLOBAL CONSTANTS                                 ////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
////                       FUNCTION PROTOTYPES                              ////
////////////////////////////////////////////////////////////////////////////////

//reads TPS, OIL, BPS then returns data in %
void read_adc_and_button(uint8_t *data);

/*
    * @brief Initialize the ADC
*/
void init_adc_and_buttons();


#endif /* ADC_H */