// mul table printing in the file.
#include <stdio.h>

int main() {
    int n;
    int mul[10];
    FILE *ptr;
    ptr = fopen("mul table.txt" , "w");
    printf ("Enter the number of which you have to print the multiplication table in the file.\n");
    scanf ("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        mul[i] = n*(i+1);
    }
    
    for (int j = 0; j < 10; j++)
    {
        fprintf (ptr, "%d multiply by %d = %d\n",n, j+1,mul[j]);
    }

    // we can also make this programe without the help of arrays.
    // by direct printing the table by the fprintf.
    
    return 0;
}