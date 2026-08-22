#include <stdio.h>

int sum (int a , int b);

int main() {
    int x=1 , y=3 ; 
    printf ("the value of x and y is %d and %d.\n",x,y);
    printf ("the value of x+y is %d.\n",sum(x,y));
    printf ("the value of x and y after function call is %d and %d.\n",x,y);
    return 0;
}

int sum (int a , int b){
    /*here if we change the a and b then their is no effect of 
    this in the the main function. */
    int c = a + b;
    a = 6 ; 
    b = 3 ; 
    return c;
}