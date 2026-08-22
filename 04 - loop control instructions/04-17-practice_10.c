// prime number finder
#include <stdio.h>

int main() {
    int n , i = 2 , prime = 1;

    printf ("enter the value of n\n");
    scanf ("%d",&n);

    for (i = 2 ; i < n ; i++)
    {
        if (n%i==0)
        {
            prime = 0;
            
        }
    }
    if (prime == 0)
    {
        printf ("your number is not prime number\n");
    }
    else {
        printf ("your number is prime number\n");
    }
    
    
    return 0;
}