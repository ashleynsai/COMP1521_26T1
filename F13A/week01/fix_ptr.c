// Tutorial 1, Question 3.

#include <stdio.h>
#include <stdlib.h>

int *get_num_ptr(void);

int main(void) {
    // Fix 1: Initialise x here
    // Fix 2: Malloc

    int *num = get_num_ptr();
    printf("%d\n", *num);

    return 0;
}

// Ensure the value is still set in this function
// Do not change return type
int *get_num_ptr(void) {
    int *x = malloc(sizeof(int));
    *x = 42;
    return x;
}