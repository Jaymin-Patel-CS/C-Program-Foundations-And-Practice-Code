// basics
#include <stdio.h>

int main() {
    int a = 1;
    int *b = &a;
    printf ("the address of a is %u\n",b);
    printf ("the value of a is is %u\n",*b);
    return 0;
}