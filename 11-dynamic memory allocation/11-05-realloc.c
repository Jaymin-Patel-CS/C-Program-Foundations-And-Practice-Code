#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    
    for (int i = 0; i < 6; i++)
    {
        printf ("enter the value of the integer number %d : ",i+1);
        scanf ("%d",&ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf ("integer number %d is %d\n",i+1,ptr[i]);
    }

    // if the work of the old ptr is over then we can reallocate that pointer to the new work to prevent the
    // memory usage of the programe.like -- 
    ptr = (int *)realloc(ptr , 10 * sizeof (int));
    for (int i = 0; i < 10; i++)
    {
        printf ("enter the value of the integer number %d : ",i+1);
        scanf ("%d",&ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf ("integer number %d is %d\n",i+1,ptr[i]);
    }
    
    return 0;
}