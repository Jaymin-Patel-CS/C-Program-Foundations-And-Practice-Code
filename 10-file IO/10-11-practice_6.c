#include <stdio.h>

int main() {
    FILE *ptr , *ptrr;
    ptr = fopen("num.txt","r");
    ptrr = fopen("pr 6 doubled integer.txt","w");
    int a;
    while (1)
    {
        fscanf (ptr,"%d",&a);
        if (a == 0){break;}
        fprintf (ptrr,"%d ",(a*2));
    }
    
    return 0;
}