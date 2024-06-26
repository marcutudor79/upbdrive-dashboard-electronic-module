/******************************************************************************/
/* UPBDRIVE ECU-Emulator Firmware                                             */
/* All rights reserverd 2023                                                  */
/******************************************************************************/

#ifndef HEARTBEAT_H
#define HEARTBEAT_H

#include "common.h"
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"

////////////////////////////////////////////////////////////////////////////////
////                       GLOBAL VARIABLES                                 ////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
////                       GLOBAL MACROS                                    ////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
////                       GLOBAL CONSTANTS                                 ////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
////                       FUNCTION PROTOTYPES                              ////
////////////////////////////////////////////////////////////////////////////////

void init_heartbeat(uint8_t* heartbeat_state);

void toggle_heartbeat(uint8_t *heartbeat_state);


#endif /* HEARTBEAT_H */