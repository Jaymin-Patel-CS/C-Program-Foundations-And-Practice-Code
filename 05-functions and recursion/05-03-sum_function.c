#include <stdio.h>
// this function takes a and b as an input and give the int output.
int sum (int a , int b); // function prototype declearation
int main() {                           // a and b are the parameters and output function is called result.
    int c;
    c = sum (2 , 5 );
    printf ("The sum is %d.\n",c);
    return 0;
}

int sum (int a , int b){
    int result;
    result = a + b;
    return result; 
}