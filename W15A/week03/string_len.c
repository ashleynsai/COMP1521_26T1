main:
char *string = "...."; // $t0 - char *string
char *s = &string[0]; // $t1 - char *s
int   length = 0;     // $t2 - int length
while (*s != '\0') {
   length++;  // increment length
   s++;       // move to next char
}