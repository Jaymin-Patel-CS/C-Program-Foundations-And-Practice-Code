// printing i by pointers.
#include <stdio.h>

int main() {
    int i = 1;
    int *j = &i;
    int **k = &j;
    printf ("the value of i is %d.\nthe value of j and address of i is %u.\nthe value of k and address of j is %u\n",i,j,k);
    printf ("the value of i by the method of pointer is %u\n",***(&k));
    printf ("the value of i by the method of pointer (better method than my one) is %u\n",**k);
    return 0;
}