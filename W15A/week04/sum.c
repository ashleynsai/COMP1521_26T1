// sum 4 numbers using function calls

#include <stdio.h>

int sum4(int a, int b, int c, int d);
int sum2(int x, int y);

// Non-leaf functions must always preserve the value of $ra (push/pop)
// All function calls overwrite $ra

int main(void) {            // ra = program end
    // push $ra (save the value ra = program end to the stack)
    // with every function call, ra is overwritten/clobbered
    int result = sum4(11, 13, 17, 19); // ra = 10
    printf("%d\n", result);

    // pop $ra (restores return address to go back to right ending place)
    return 0;
}

int sum4(int a, int b, int c, int d) { // ra = 10
    
    int res1 = sum2(a, b);      // ra updated due to function call
    int res2 = sum2(c, d);      // ra updated due to function call
    return sum2 (res1, res2);
}

int sum2(int x, int y) { // Leaf function (doesn't call any other function)
    // DO NOT push and pop
    // DO NOT use $s registers, only $t
    return x + y;
}