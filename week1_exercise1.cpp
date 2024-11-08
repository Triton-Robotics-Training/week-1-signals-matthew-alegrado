#include "mbed.h"

DigitalOut output(LED1);
DigitalIn input(BUTTON1);

int main() {
    while(1) {
        int x = input; 
        if (x) {
            output = 1;
        }
        else {
            output = 0;
        }
        wait_ms(50);
    }
}
