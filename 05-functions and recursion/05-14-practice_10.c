// star pattern.
#include <stdio.h>

int main() {
    int n;
    printf ("enter the value of n\n");
    scanf ("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < ((2*n) - 1); j++)
        {
        printf ("*");   
        }
        printf("\n");

    }

    
    return 0;
}