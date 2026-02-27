// Squares a number, unless its square is too big for a 32-bit integer.
// If it is too big, prints an error message instead.

#include <stdio.h>

#define SQUARE_MAX 46340

int main(void) {
    int x, y;       // t0 - x, t1 - y

    printf("Enter a number: "); // SYSCALL 4
    scanf("%d", &x); // SYSCALL 5

    // You cannot have squiggly brackets,
    // No ELSE, IF ELSE, WHILE, FOR

    // instead do: (one condition) goto label;
    if (x > SQUARE_MAX) goto invalid_number;

valid_number:
    y = x * x; // valid case
    printf("%d", y); // SYSCALL 1
    printf("\n"); // SYSCALL 11
    goto epilogue;

invalid_number:
    printf("square too big for 32 bits\n");

    // if (x > SQUARE_MAX) {
    //     printf("square too big for 32 bits\n"); // invalid case
    // } else {
    //     y = x * x; // valid case
    //     printf("%d\n", y);
    // }
epilogue:
    return 0;
}