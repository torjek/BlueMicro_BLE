#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"
#define KEYBOARD_SIDE RIGHT
// CHANGE THIS FOR THE KEYBOARD TO MATCH WHAT IS BEING FLASHED. OPTIONS: LEFT  RIGHT  MASTER

#define DEVICE_NAME_R                         "Sofle_R"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_L                        "Sofle_L"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_M                         "SofleBLE"                          /**< Name of device. Will be included in the advertising data. */

#define DEVICE_MODEL                        "SofleBLE_V1"                          /**< Name of device. Will be included in the advertising data. */

#define MANUFACTURER_NAME                   "JosefAdamcik"                      /**< Manufacturer. Will be passed to Device Information Service. */


#if KEYBOARD_SIDE == RIGHT
#define KEYMAP( \
  R00, R01, R02, R03, R04, R05,\
  R10, R11, R12, R13, R14, R15, \
  R20, R21, R22, R23, R24, R25,\
  R30, R31, R32, R33, R34, R35,\
  R40, R41, R42, R43, R44, R45\
  ) \
  { \
    { R05, R04, R03, R02, R01, R00 }, \
    { R15, R14, R13, R12, R11, R10 }, \
    { R25, R24, R23, R22, R21, R20 }, \
    { R35, R34, R33, R32, R31, R30 }, \
    { R45, R44, R43, R42, R41, R40 } \
  }
#else
#define KEYMAP( \
  L00, L01, L02, L03, L04, L05,\
  L10, L11, L12, L13, L14, L15, \
  L20, L21, L22, L23, L24, L25,\
  L30, L31, L32, L33, L34, L35,\
  L40, L41, L42, L43, L44, L45\
  ) \
  { \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { L30, L31, L32, L33, L34, L35 }, \
    { L40, L41, L42, L43, L44, L45 } \
  } 

#endif

#endif /* KEYBOARD_CONFIG_H */