// reallocate the 5 integer ptr to the 10 integers programe.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0 ; i < 5 ; i++)
    {
        printf ("Enter the value of integer number %d : ",i+1);
        scanf ("%d",&ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf ("The value of the integer number %d is %d\n", i+1, ptr[i]);
    }
    
    realloc (ptr, 10 * sizeof (int));

    for (int i = 0 ; i < 10 ; i++)
    {
        printf ("Enter the value of integer number %d : ",i+1);
        scanf ("%d",&ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf ("The value of the integer number %d is %d\n", i+1, ptr[i]);
    }
    return 0;
}