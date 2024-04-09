/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include <cstdio>
#include <iostream>
#include "wirecut.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms

int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1);
    while (true) {
        led = !led;
        wirecut();
        /* std::cout << "red: " << redWire.read() << std::endl;
        std::cout << "blue: " <<  blueWire.read() << std::endl;
        std::cout << "green: " <<  greenWire.read() << std::endl;
        std::cout << "purple: " << purpleWire.read() << std::endl;
        std::cout <<  std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        wait_us(5000000); */
        std::cout << bombState << std::endl;
    }
}
