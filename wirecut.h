#ifndef WIRECUT_H_
#define WIRECUT_H_

#include "mbed.h"
#include <vector>
#include <string>

InterruptIn redWire(D1);
InterruptIn blackWire(D2);
InterruptIn purpleWire(D3);
InterruptIn greenWire(D4);
int wireCount = 4;
int wirecut() {
   int bombState = 1;
   while(bombState == 1) {
       int code = 4;
       int current = 0;
       if(current > 4 ) bombState = 0;
       if(blackWire == 0) {
           if (current == 0) {
               current++;
           } 
           else if (current > 0 && current < 5) {
               break;
           } else {
               current += 5;
           }
       }
       if(greenWire == 0) {
           if (current == 1) {
               current++;
           } 
           else if (current > 1 && current < 5 ) {
               break;
           } else {
               current += 5;
           }
       }
      if(redWire == 0) {
           if (current == 2) {
               current++;
           } 
           else if (current > 2 && current < 5 ) {
               break;
           } else {
               current += 5;
           }
       }
       if(purpleWire == 0) {
           if (current == 3) {
               current++;
           } 
           else if (current == 4 ) {
               return bombState;
           } else {
               current += 5;
           }
       }
   } 
   return bombState;
}


#endif // WIRECUT_H_