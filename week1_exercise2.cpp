#include "mbed.h"

DigitalOut output(LED1);
AnalogIn input(p15);

int main() {
    while(1) {
        double proportion = input;
        output = 1;
        wait_ms(2000*proportion);
        output = 0;
        wait_ms(2000*(1-proportion));
    }
}
