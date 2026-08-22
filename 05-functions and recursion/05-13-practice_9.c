// star pattern
#include <stdio.h>

void starpattern (int n);

int main() {
    int n ;
    printf ("enter the value of n up to which you want to print odd star pattern\n");
    scanf ("%d",&n);
    starpattern (n);
    return 0;
}

void starpattern (int n){
    if (n == 1)
    {
        printf ("*\n");
        return;
    }
    starpattern(n-1);
    for (int i = 0; i < ((2*n)-1); i++)
    {
        printf ("*");
    }
    printf ("\n");
}