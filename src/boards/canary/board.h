/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef CANARY_H
#define CANARY_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER       2
#define LED_PRIMARY_PIN   _PINNUM(1, 1) // Blue
#define LED_SECONDARY_PIN _PINNUM(1, 3) // Green
#define LED_STATE_ON      0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER  2

#define BUTTON_1       _PINNUM(0, 16)
#define BUTTON_2       _PINNUM(0, 15)
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP
#define RESET_CHIP     1

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER  "Canary-Radio-Company"
#define BLEDIS_MODEL         "CANARYONE"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+

#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x009F
#define USB_DESC_CDC_ONLY_PID  0x009F

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME  "Canary One"
#define UF2_VOLUME_LABEL   "CANARYBOOT"
#define UF2_BOARD_ID      "CANARYONE"
#define UF2_INDEX_URL     "https://canaryradio.io"

#endif // CANARY_H
