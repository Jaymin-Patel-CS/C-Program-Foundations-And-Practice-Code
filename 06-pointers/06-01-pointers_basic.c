#include <stdio.h>

int main() {
    int i = 34;
    int *j = &i;
    printf ("the value of i is %d\n",i);
    printf ("the value of i is %d\n",*j);   // this will print the value of i. *j is called 'value at address' operator.
    printf ("the address of i is %u\n",&i); // this will print the address of i.
    printf ("the address of i is %u\n",j);  // this will also print the address of i.
    printf ("the address of j is %u\n",&j);   
    printf ("the value at j is %u\n", *(&j));  // as in 7th line *(address) is operator to print the value at addres of j.

    // we can make the pointer to a pointer which indicates the address of the first pointer's address and 
    // this chain can go to the infinite.
    // this is demonstration of this chain.
    // i = 72 --> &i = 7777.
    // j(first pointer) = 7777 --> &j = 8888.
    // k(second pointer) = 8888 --> &k = 9999.
    return 0;
}