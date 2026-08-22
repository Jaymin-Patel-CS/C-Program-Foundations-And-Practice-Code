// sum of first n natural numbers.
#include <stdio.h>

int sum (int n);

int main() {
    int n ;
    printf ("enter the value of n th natural number up to which you want sum.\n");
    scanf ("%d",&n);

    printf ("the sum of n natural numbers is %d",sum(n));

    return 0;
}

int sum (int n){
    if (n == 1)
    {
        return 1;
    }else
    {
        return (n + sum (n-1));
    }
    
}