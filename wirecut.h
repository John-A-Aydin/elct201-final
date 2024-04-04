#ifndef WIRECUT_H_
#define WIRECUT_H_

#include "mbed.h"

InterruptIn redWire(D1);
InterruptIn blackWire(D2);
InterruptIn purpleWire(D3);
InterruptIn greenWire(D4);

bool wirecut() {
    bool bombState = true;
    while(bombState) {
        // yeah
    }
    return bombState;
}
#endif // WIRECUT_H_