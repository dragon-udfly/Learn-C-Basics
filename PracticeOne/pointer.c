#include <stdio.h>

int main() {

    int value = 10; // variable

    // printing variables and its memory address
    printf("Value: %d, Address: %x\n", value, &value);

    int *y; // declare pointer variable to store memory address
    y = &value; // assigning memory address of variable: value
    printf("Address: %x\n", y);
    // to get the real value of pointed variable
    printf("Value: %d\n", *y);

    // null pointer 

    int age = 23;
    int *address_age = NULL; // good to assign NULL when declaring
    address_age = &age;
    printf("Value: %d, Address: %x", *address_age, address_age);

    return 0;
}