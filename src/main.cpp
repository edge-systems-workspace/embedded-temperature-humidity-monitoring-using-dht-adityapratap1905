/**
 * @file main.cpp
 * @brief Relay HC-05 (AT mode) serial data to the PC and control onboard LED.
 *
 * This simple Arduino sketch reads bytes from the HC-05 Bluetooth module
 * (connected to Serial1 in AT mode), forwards each received character to the
 * PC Serial Monitor (Serial) and toggles the onboard LED when it receives
 * the characters '1' (turn LED on) and '0' (turn LED off).
 *
 * @author
 * @date 2026-02-17
 * @version 1.0
 *
 * @note Ensure the HC-05 is placed in AT-mode before using Serial1 for
 * AT command communication. Baud rate is set to 9600 for both Serial and
 * Serial1 to match common HC-05 AT-mode defaults.
 */

#include <Arduino.h>

/** Pin number for the onboard LED (built-in on many Arduino boards) */
static const uint8_t LED_PIN = 13;

/**
 * @brief Initialize serial ports and configure the LED pin.
 *
 * - Sets the LED pin as OUTPUT.
 * - Starts the USB/PC Serial monitor at 9600 baud.
 * - Starts Serial1 (used for the HC-05) at 9600 baud.
 *
 * @note No parameters or return value (Arduino API).
 */
