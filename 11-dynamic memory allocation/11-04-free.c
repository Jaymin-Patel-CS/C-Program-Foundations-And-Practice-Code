#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int *ptr2;
    ptr = (int *)malloc(6 * sizeof(int));
    // we need to type cast the malloc function cuz the malloc function returns the void pointer.
    // sizeof is the function which calculate the memory of the given datatype.
    for (int i = 0; i < 6000; i++)
    {
        ptr2 = (int *) malloc(60000 * sizeof(int));
        printf ("enter the value of the integer number %d : ",i+1);
        scanf ("%d",&ptr[i]);
        free(ptr2); // free function is used to free the pointer of the 
    }
    for (int i = 0; i < 6; i++)
    {
        printf ("integer number %d is %d\n",i+1,ptr[i]);
    }
    
    return 0;
}