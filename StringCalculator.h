#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to add two numbers from a string
int add(const char* input_string) {
    size_t input_length = strlen(input_string);
    char* input_copy = (char*)(input_length + 1); 
    if (input_copy == NULL) {
         return -1; 
    }
    strcpy(input_copy, input_string); // 

    int sum = check_for_empty_string(input_copy);
   return sum;
}

// Function to check if the string is empty
int check_for_empty_string(const char* input_string) {
    if (*input_string == '\0') {
        return 0; // String is empty
    } else {
        return -1; // String is not empty
    }
}


