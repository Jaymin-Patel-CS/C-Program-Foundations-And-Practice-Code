#include <stdio.h>

int main() {
    int a;
    printf ("enter the number \n");
    scanf ("%d",&a);

    if (a%2==0){
        printf ("%d is even",a);
    }
    else{                                      // this is optional if you don't write this the 
        printf ("%d is odd",a);                // negative test does not give any responce
    }
    return 0;
}