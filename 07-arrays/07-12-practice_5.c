//  positive integer counter.
#include <stdio.h>

int counter (int arr[],int n)
{
    int fake =  0;
    int counting = 0;
    for (int i = 0; i < n; i++)
    {
        if (fake<arr[i])
        {
            counting++;
        }
    }
    printf ("the number of positive integers in your array is %d\n",counting);
}

int main() {
    int arr [10];
    
    for (int i = 0; i < 10; i++)
    {
        printf ("enter the value of element %d in the array",i+1);
        scanf ("%d",&arr[i]);
    }
    counter(arr,10);
    return 0;
}