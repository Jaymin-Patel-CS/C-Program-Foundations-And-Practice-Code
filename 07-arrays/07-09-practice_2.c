// same or not.
#include <stdio.h>              // my code.

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int *ptr = &arr[0];
    
    printf ("the first element of the array is %d\n",arr[0]);
    printf ("the prt+2 element of the array is %u\n",*(ptr+2));
    printf ("the third element of the array is %d\n",arr[2]);
    if ((*(ptr+2)) == arr[2])
    {
        printf ("hey! you did well. the element at prt+2 is equals to the third element of the array if ptr is the pointer of first element.arigatto\n");
    }
    
    return 0;
}

// tutorial code

/* #include <stdio.h>

int main() {
    int arr[10];
    int *ptr = arr;
    ptr = ptr +2;
    if (ptr == &arr[2])
    {
        printf ("these two, points to the same location.");
    }else
    {
        printf ("these two, doesn't points to the same location.");
    }
    
     
    return 0;
} */