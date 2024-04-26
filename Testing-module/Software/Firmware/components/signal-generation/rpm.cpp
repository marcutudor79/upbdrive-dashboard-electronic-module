/******************************************************************************/
/* UPBDRIVE ECU-Emulator Firmware                                             */
/* All rights reserverd 2023                                                  */
/******************************************************************************/

#include "inc/rpm.h"

////////////////////////////////////////////////////////////////////////////////
////                       GLOBAL VARIABLES                                 ////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
////                       GLOBAL FUNCTIONS                                 ////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
////                       LOCAL MACROS                                     ////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
////                       LOCAL CONSTANTS                                  ////
////////////////////////////////////////////////////////////////////////////////


void generate_rpm(uint8_t *data)
{
    uint16_t rpm = (((*data << 8) & 0xFF00) + *(data + 1));

    rpm =   /* minimal rpm for running engine */
            (800 +
            /* potentiometer 0 - 4096, make it * 3 to have a range between 0 - 13.138 */
            (rpm * 3) +
            /* add a randomness factor for better simulation */
            random_signal());

    *data       = GET_MSB(rpm);
    *(data + 1) = GET_LSB(rpm);
}
