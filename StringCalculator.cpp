
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <StringCalculator.h>

int add(char *input_string) {
    int sum = 0;
    int current_number = 0;
    int in_number = 0;  // Flag to track if currently parsing a number
    
    // Traverse through each character of the input string
    while (*input_string) {
        if (isdigit(*input_string)) {
            current_number = current_number * 10 + (*input_string - '0');
            in_number = 1;
        } else {
            // If we were parsing a number, add it to sum if it's <= 1000
            if (in_number) {
                if (current_number <= 1000) {
                    sum += current_number;
                }
                current_number = 0;
                in_number = 0;
            }
        }
        input_string++;
    }
    
    // Add the last number if the string ends with a number <= 1000
    if (in_number && current_number <= 1000) {
        sum += current_number;
    }
    
    return sum;
}

