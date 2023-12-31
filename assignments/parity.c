#include <stdio.h>
#include <string.h>
#include <stdint.h>

#include "parity.h"
#define MAX_BYTES 500

// Calculate and return the parity byte 
// for an array of bytes, using ODD parity.
// uint8_t arr[5][8] = {{135, 172, 155, 20, 17, 82, 21, 44},
//                     {15, 72, 115, 31, 175, 143, 2, 23},
//                     {17, 21, 44, 54, 123, 34, 82, 123},
//                     {117, 232, 43, 87, 122, 182, 34, 112},
//                     {23, 144, 65, 112, 89, 188, 72, 115}};
// uint8_t answers[5] = {33, 225, 145, 128, 151};

uint8_t findParity(uint8_t *array, uint8_t len) {
    uint8_t parityByte = 0; // Initialize to 0

    for (int bit = 0; bit < 8; bit++) {
        uint8_t countOnes = 0;

        for (uint8_t i = 0; i < len; i++) {
            if (array[i] & (1 << bit)) {
                countOnes++;
            }
        }

        if (countOnes % 2 == 0) {
            parityByte |= (1 << bit);
        }
    }

    return parityByte;
}

// (Done for you). 
// Converts a hexadecimal digit into decimal
// nibble = digit to convert, as an ASCII
// character. E.g. '0', 'F', '3', etc.
uint8_t finddec(char nibble) {

    if(nibble >= '0' && nibble <= '9')
        return nibble - '0';

    switch(nibble){
        case 'a':
        case 'A': return 10;
        case 'b':
        case 'B': return 11;
        case 'c':
        case 'C': return 12;
        case 'd': 
        case 'D': return 13;
        case 'e':
        case 'E': return 14;
        case 'f':
        case 'F': return 15;

        default:
            return 0;
    }
}
// Converts a 2-digit hexadecimal number in the form
// of a C string.
// The "byte" parameter must be an array of 3 characters. 
// E.g. If it represents 0x3F, then "byte" contains
// the string "3F".

uint8_t hex2dec(char *byte) {
    // Converts 2-digit hexadecimal number in "byte"
    // into decimal. Complete this function in a 
    // "return" statement. E.g. return bytes[1] + byte[2];
    // No credit if you use >1 line.
    // convert 2-digit hexadecimal number in "byte" into decimal in one line
    return finddec(byte[0]) * 16 + finddec(byte[1]);
}

// Converts a string of hexadecimal numbers into an array of 
// 8-bit values.
// E.g. 3A 4C 10 2B will convert to a 4 element array containing
// 58, 76, 16 and 43, which are the decimal equivalents of
// 3A, 4C, 10 and 2B. The "len" parameter returns the number 
// of bytes converted,in this case 4. 
// You may want to look at the strtok function.

void string2bytes(char *str, uint8_t *bytes, uint8_t *len) {
  char *token = strtok(str, " ");
    *len = 0;

    while (token != NULL) {
        bytes[*len] = hex2dec(token);
        (*len)++;
        token = strtok(NULL, " ");
    }
}

// Receives a string of bytes in hexadecimal, and returns the parity
// byte as an 8-bit value.
// str = String of bytes in hexadecimal separated by spaces
// E.g. "08 1C 4B 1E". Do not use the 0x prefix for the bytes.
uint8_t calculateParity(char *str) {
  uint8_t len = 0;
  uint8_t bytes[MAX_BYTES];
  string2bytes(str, bytes, &len);
  return findParity(bytes, len);
}

