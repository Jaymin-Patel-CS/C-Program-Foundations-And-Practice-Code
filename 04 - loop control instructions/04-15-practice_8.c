// factorial
#include <stdio.h>

int main() {
    int n , i = 1  , factorial = 1 ;
    printf ("enter the value of n\n");
    scanf ("%d",&n);
    for (i = 1; i <= n ; i++)
    {
        factorial *= i ; 
    }
    printf ("the value of factorial of %d is %d", n , factorial);
    return 0;
}