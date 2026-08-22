// printing the array by function and passing the 2d array to the function.
#include <stdio.h>

void display (int arr[][2]);

int main() {
    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf ("enter the value of element of row %d and column %d (according ot matrices).",i+1,j+1);
            scanf ("%d",&arr[i][j]);
        }
    }

    display (arr);
    
    return 0;
}

void display (int arr[][2])
{
    printf ("{\n");
    for (int i = 0; i < 2; i++)
    {
        printf ("{");
        for (int j = 0; j < 2; j++)
        {
            printf ("%d",arr[i][j]);
            if (j == 1)
            {
                continue;
            }
            printf (" , ");
        }
        printf ("}\n");
    }
    printf ("}");
}