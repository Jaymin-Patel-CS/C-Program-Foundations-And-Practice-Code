#include <stdio.h>

// my function for this .
void starpattern(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (i == 1)
        {
            printf ("*\n");
            continue;
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// the code with the recursion of the function.

/* void starpattern(int a)
{
    if (a == 1)
    {
        printf ("*\n");
        return;
    }
    starpattern(a-1);
    for (int j = 1; j <= a ; j++)
    {
        printf("*");
    }
    printf("\n");
} */


int main (){
    int a ; 
    printf ("enter your number.");
    scanf ("%d",&a);
    starpattern(a);
    
}