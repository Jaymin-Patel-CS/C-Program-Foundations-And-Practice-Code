// address printing by two ways can be diffrent.
#include <stdio.h>

void address (int a);

int main() {
    int i = 1;
    printf ("the address of i is %u\n",&i); 
    printf ("address by the function call\n");
    address (i);
    return 0;
}

void address (int a){
    printf("the address of i is %u\n",&a); 
}