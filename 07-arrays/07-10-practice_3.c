// multiplicative table.
#include <stdio.h>

int main() {
    int n;
    int multiplicative_table [10];
    printf ("enter the value of n (not very big)");
    scanf ("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        multiplicative_table [i] = n*(i+1);
    }
    for (int  i = 0; i < 10; i++)
    {
        printf ("%d * %d = %d\n", n , i+1 ,multiplicative_table[i]);
    }
    return 0;
}