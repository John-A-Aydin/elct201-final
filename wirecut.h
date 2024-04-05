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
       //yeah
   } 
   return bombState;
}


#endif // WIRECUT_H_