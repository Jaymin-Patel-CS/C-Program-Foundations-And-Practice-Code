#include <stdio.h>

void arr_elements (int *ptr ,  int n);

int main() {
    int arr [] = {334,978,465,312,6514,132,78,456};
    arr_elements (arr,8);
    printf ("the changed value of 3rd element of array is %d",arr[2]);
    return 0;
}

// void arr_elements (int *ptr ,  int n){          // first way to make this 
//     for (int i = 0; i < n; i++)
//     {
//         printf ("the vlaue of element %d of arr is %d\n",i+1,*(ptr+i));
//     }
    
// }

void arr_elements (int a[] ,  int n){              // second way to make this
    for (int i = 0; i < n; i++)
    {
        printf ("the vlaue of element %d of arr is %d\n",i+1,a[i]);
    }
    // if we change the value of the element of arr from this two functions it will change it 
    //cuz we are passing the address of the array not the copy like below.
    a[2] = 1;
}