// Prints a right - angled triangle of asterisks, 10 rows high.

#include <stdio.h>

int main(void) {
    // if (cond) goto label
    // for each loop - init, cond, body, step, end
    for (int i = 1; i <= 10; i++) { // outer loop
        for (int j = 0; j < i; j++) { // inner loop
            printf("*");
        }
        printf("\n");
    }

outer_init:
    i = 1;
outer_cond: // What is the end condition
    if (i > 10) goto outer_end;

outer_body:

inner_init:
    j = 0;
inner_cond:
    if (j >= i) goto inner_end;
inner_body:
    printf("*");
inner_step:
    j++;
    goto inner_cond;
inner_end:

    printf("\n");

outer_step:
    i++;
    goto outer_cond;
outer_end:
    return 0;
}