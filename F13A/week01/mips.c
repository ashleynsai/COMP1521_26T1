// Prints the square of a number

#include <stdio.h>

int main(void) {
    int x, y; // Local variables

    printf("Enter a number: ");
    scanf("%d", &x);

    y = x * x;

    printf("%d\n", y);

    return 10;
}