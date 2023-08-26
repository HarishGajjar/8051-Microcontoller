/*
 * AT89S52 Microcontroller - 1 Second LED Blink
 * Developer: [Your Name]
 * Date: August 26, 2023
 * Project: 1 Second LED Blink
 * Copyright: This code is provided for free and open use.
 * License: MIT License
 */

#include <regx51.h>  // Include the header file for AT89S52

sbit LED = P2^0;  // Define LED as a bit variable corresponding to P2.0

// Function to introduce a delay in milliseconds
// This function uses nested loops to create a software delay
// The exact delay introduced depends on the oscillator frequency
// Adjusting the inner loop count adjusts the delay duration
void delay(unsigned int msec) {
    unsigned int i, j;
    for (i = 0; i < msec; i++) {
        for (j = 0; j < 115; j++) {
            // Nested loop to introduce the delay
            // The value of 115 is selected based on experimentation
            // It's adjusted for an approximate 1-second delay
            // The actual delay duration might vary due to various factors
        }
    }
}

// The main function is the starting point of the program
void main() {
    // Initialize LED to the off state (logic 0)
    LED = 0;

    // Infinite loop to continuously blink the LED
    while (1) {
        // Turn on the LED at P2.0 by setting it to logic 1
        LED = 1;

        // Introduce a delay of 1000 milliseconds (1 second)
        delay(1000);

        // Turn off the LED at P2.0 by setting it to logic 0
        LED = 0;

        // Introduce another delay of 1000 milliseconds (1 second)
        delay(1000);

        // The LED will blink on and off at a 1-second interval
        // This loop runs indefinitely, ensuring continuous blinking
    }
}
