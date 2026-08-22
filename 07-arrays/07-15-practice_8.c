// 3d loop.
#include <stdio.h>

int main() {
    int arr [2][2][2];
    int *ptr = &arr[0][0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf ("enter element of set number %d, row %d and column %d : ",i+1,j+1,k+1);
                scanf ("%d",&arr[i][j][k]);
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf ("the address of element in set number %d , row %d and column %d(element is %d) is : %u\n",i+1,j+1,k+1,arr[i][j][k],ptr);
                ptr++;
            }
        }
    }
    
    return 0;
}

