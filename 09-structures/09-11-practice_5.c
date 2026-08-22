// complex number.
#include <stdio.h>
#include <string.h>

typedef struct complex
{
    int a;
    int b;
}complex;

void display (complex c[],int n)
{
    for (int j = 0; j < n; j++)
    {
        printf ("complex number %d named c%d is (%d + %di)\n", j+1 , j+1 , c[j].a , c[j].b);
    }
    printf ("where i is (-1)^(1/2)\nsimpaly underroot(-1)\n");
}

int main() {
    complex c[5];
    int n;
    printf ("Enter the number of total complex numbers you have to enter but it must be less than 5.\n");
    scanf ("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf ("Enter the real and imagenary part of your complex number %d named c%d:\n",i+1,i+1);
        printf ("Enter the real part of your conplex number.\n");
        scanf ("%d",&(c[i].a));
        printf ("Enter the imagenary part of your complex number.\n");
        scanf ("%d",&(c[i].b));
    }

    display (c,n);
    // for (int j = 0; j < n; j++)
    // {
    //     printf ("complex number %d named c%d is (%d + %di)\n", j+1 , j+1 , c[j].a , c[j].b);
    // }printf ("where i is (-1)^(1/2)\nsimpaly underroot(-1)\n");
    
    return 0;
}
