// Simple factorial calculator - without error checking

#include <stdio.h>

int main(void) {
    int n, i;
    printf("n  = ");
    scanf("%d", &n);

    int fac = 1;
    // NO FOR LOOPS, WHILE LOOPS
    // Everything must be in the form of
    // if (cond) goto label

    // Whenever there is a loop, break down into labels
    // init, cond, body, step, end
init:
    i = 1;

cond:
    if (i > n) goto end; // change condition to be the ending condition

body:
    fac = fac * i;

step:
    i = i + 1;
    goto cond;

end:

    // for (int i = 1; i <= n; i++) {
    //     fac *= i;
    // }

    printf("n! = %d\n", fac); // 3 separate syscalls
    return 0;
}