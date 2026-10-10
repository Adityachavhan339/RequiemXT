#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"

//Button Mappings
#define BTN_A         0
#define BTN_B         1
#define BTN_Y         2
#define BTN_X         3
#define DPAD_UP       4
#define DPAD_DOWN     5
#define DPAD_LEFT     6
#define DPAD_RIGHT    7
#define START_BTN     8
#define SELECT_BTN    9
#define BTN_LB        10
#define BTN_RB        11
#define BTN_LT        12
#define BTN_RT        13

//Joysticks Inputs (ADC)
#define JOY_LEFT_X    26
#define JOY_LEFT_Y    27
#define JOY_RIGHT_X   28
#define JOY_RIGHT_Y   29

void setup_hardware() {
    const uint buttons[] = {BTN_A, BTN_B, BTN_Y, BTN_X, DPAD_UP, DPAD_DOWN, 
                            DPAD_LEFT, DPAD_RIGHT, START_BTN, SELECT_BTN, 
                            BTN_LB, BTN_RB, BTN_LT, BTN_RT};
    for (int i = 0; i < 14; i++) {
        gpio_init(buttons[i]);
        gpio_set_dir(buttons[i], GPIO_IN);
        gpio_pull_up(buttons[i]);
    }

    adc_init();
    adc_gpio_init(JOY_LEFT_X);
    adc_gpio_init(JOY_LEFT_Y);
    adc_gpio_init(JOY_RIGHT_X);
    adc_gpio_init(JOY_RIGHT_Y);
}

int main() {
    stdio_init_all();
    setup_hardware();

    while (true) {
        tight_loop_contents();
    }
}
