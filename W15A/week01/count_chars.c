#include <stdio.h>

// Write a c program `count_chars.c` that uses to read in characters until the 
// // user enters Ctrl-D and then prints the total number of characters entered.

// Use man 3 getchar to look at the manual entry.

int main(void) {
    int count = 0;

    int a;
    while ((a = getchar()) != EOF) {
        // Add to count
        count++;
        printf("%c\n", a);
    }

    printf("Characters entered is: %d\n", count);

    return 0;
}