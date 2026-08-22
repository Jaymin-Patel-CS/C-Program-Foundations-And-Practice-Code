// function recurtion : means the repeation of function by its self. this happends in the factorial.
#include <stdio.h>
int factorial (int a); // function prototype.

int main() {
    int a ; 
    printf ("enter the value of a\n");
    scanf ("%d",&a);
    printf ("the factorial of %d is %d",a , factorial(a));
    return 0;
}

int factorial (int a)
{
    if ( a==1 || a==0)
    {
        return 1;
    }
    else
    {
        return (a * factorial (a-1));
    }
    
}