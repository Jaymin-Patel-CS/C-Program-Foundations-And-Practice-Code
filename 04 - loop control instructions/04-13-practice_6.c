// sum of first n natural no
#include <stdio.h>

int main() {
    int i = 1 , x=0 , n;
    printf ("enter the value of \n");
    scanf ("%d",&n);

    for (i = 1 ; i <= n ; i++)
    {
        x += i ;
    }
    printf ("the sum of first n natural no is %d ",x);

    return 0;
}