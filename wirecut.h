#ifndef WIRECUT_H_
#define WIRECUT_H_

#include "mbed.h"
#include <iostream>
#include <vector>
#include <string>

InterruptIn redWire(D1);
InterruptIn blueWire(D2);
InterruptIn purpleWire(D4);
InterruptIn greenWire(D3);
int bombState = 1;
void wirecut() {
    // cout << "echo" << endl;
   while(bombState == 1) {
       int code = 4;
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
           bombState = 0;
           break;
       }
       if(current == 4) {
           break;
       }
   } 
}


#endif // WIRECUT_H_