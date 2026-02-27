// Squares a number, unless its square is too big for a 32-bit integer.
// If it is too big, prints an error message instead.

#include <stdio.h>

#define SQUARE_MAX 46340

int main(void) {
    int x, y; // t0 - x, t1 - y

    printf("Enter a number: "); // SYSCALL 4
    scanf("%d", &x); // SYSCALL 5

    // Break down the if else statements
    // In simplified C, do not want to see any curly braces, else, if else, while, for
    // Final format - if (one condition) goto label;
    if (x > SQUARE_MAX) goto invalid_input;
    goto valid_input;

invalid_input:
    printf("square too big for 32 bits\n"); // SYSCALL 4
    goto epilogue;

valid_input:
    y = x * x;
    printf("%d\n", y); // SYSCALL 1 (print_int), SYSCALL 11 (print_char)

    // if (x > SQUARE_MAX) {
    //     printf("square too big for 32 bits\n");
    // } else {
    //     y = x * x;
    //     printf("%d\n", y);
    // }

epilogue:
    return 0;
}