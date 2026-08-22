// avg of three numbers. 
#include <stdio.h>

float avg (int a , int b , int c);

int main() {
    int a, b , c , result;
    printf ("enter the three numbers to find average of them.\n");
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);
    printf ("the average of the given numbers is %f",avg (a , b , c));
    return 0;
}

float avg (int a , int b , int c){
    return ((float)( a + b + c ) / 3);
}
