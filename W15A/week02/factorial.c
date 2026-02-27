// Simple factorial calculator - without error checking

#include <stdio.h>

int main(void) {
    int n;      // t0
    printf("n = ");
    scanf("%d", &n);

    int fac = 1; // t1
    // Get rid of all for, while, etc and change them
    // into if (condition) goto label
    int i;
loop_init:
    i = 1;

loop_cond: 
    if (i > n) goto loop_end;

loop_body:
    fac = fac * i;

loop_step:
    i = i + 1;
    goto loop_cond;

    // for (int i = 1; i <= n; i++) {
    //     fac *= i;
    // }

loop_end:
    printf("n! = %d\n", fac);
    return 0;
}