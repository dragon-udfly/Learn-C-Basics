#include <stdio.h>

int main() {

    int value = 10; // variable

    // printing variables and its memory address
    printf("Value: %d, Address: %x\n", value, &value);

    int *y; // declare pointer variable to store memory address
    y = &value; // assigning memory address of variable: value
    printf("Address: %x\n", y);

    return 0;
}