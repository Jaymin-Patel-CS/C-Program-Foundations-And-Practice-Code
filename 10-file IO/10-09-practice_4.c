// take one and print twice in another file.
#include <stdio.h>

int main() {
    char c,b,n;
    char arr[1000];
    char *ar = arr;
    FILE *ptr , *ptrr, *a;
    ptr = fopen("sample.txt","r");
    ptrr = fopen("pr 4 twice printing.txt","w");
    a = fopen("sample.txt","r");


   /* for (int i = 0; c != EOF; i++)
    {
        c = fgetc(ptr);
        fputc (c,ptrr);                         this is the direct way of doing it but it prints  
    }                                           twice only first time and then it is dead next time.
    fprintf (ptrr,"\nsecond time.\n",1);
    for (int i = 0; b != EOF; i++)
    {
        b = fgetc(a);
        fputc (b,ptrr);
    }*/


    for (int i = 0; c != EOF; i++)
    {
        c = fgetc(ptr);
        arr[i] = c;
    }
    char ;
    for (int k = 0; k < 2; k++)
    {
        for (int j = 0; arr[j] != EOF; j++)
        {
            // n = arr[j];
            fputc (arr[j],ptrr) ;
        }
        fprintf (ptrr,"\n",1);
    }
    

    return 0;
}