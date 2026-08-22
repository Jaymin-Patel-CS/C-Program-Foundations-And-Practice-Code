#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;
    ptr = (int *)calloc(n , sizeof(int));

    printf ("Enter the value of integers you have to dynamically allocate.");
    scanf ("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf ("Enter the value of the integer number %d : ",i+1);
        scanf ("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf ("Integer number %d is %d\n",i+1,ptr[i]);
    }
    
    return 0;
}