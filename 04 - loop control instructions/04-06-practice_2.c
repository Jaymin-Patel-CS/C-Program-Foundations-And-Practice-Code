// first n natural numbers code
#include <stdio.h>

int main() {
    int a = 1 , n;
    printf ("enter the value of n to print n natural number\n");
    scanf ("%d",&n);
    do
    {
        printf("%d\n",a++);
    } while (a<=n);
    
    return 0;
}