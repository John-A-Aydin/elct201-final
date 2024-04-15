/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include <cstdio>
#include <iostream>


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms
InterruptIn redWire(D1);
InterruptIn blueWire(D2);
InterruptIn purpleWire(D4);
InterruptIn greenWire(D3);
DigitalOut redLED(D0);
int bombState = 0;
void wirecut() {
    redLED = 0;
    // cout << "echo" << endl;
   while(bombState == 0) {
       int current = 0;
       if(blueWire.read() == 0) {
           if (current == 0) {
               current++;
           } 
           else if (current > 0 && current < 5) {
                ;
           } else {
               current += 5;
           }
       }
       if(greenWire.read() == 0) {
           if (current == 1) {
               current++;
           } 
           else if (current > 1 && current < 5 ) {
                ;
           } else {
               current += 5;
           }
       }
      if(redWire.read() == 0) {
           if (current == 2) {
               current++;
           } 
           else if (current > 2 && current < 5 ) {
                ;
           } else {
               current += 5;
           }
       }
       if(purpleWire.read() == 0) {
           if (current == 3) {
               current++;
           } 
           else if (current == 4 ) {
               ;
           } else {
               current += 5;
           }
       }
       if(current > 4) {
           bombState = 1;
           break;
       }
       if(current == 4) {
           break;
       }
   } 
    redLED = bombState;
}

int main()
{
    // Initialise the digital pin LED1 as an output
    // DigitalOut led(LED1);
    // while (true) {
        // led = !led;
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
    // }
}
