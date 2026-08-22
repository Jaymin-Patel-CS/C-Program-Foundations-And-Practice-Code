// 2d vector.
#include <stdio.h>

typedef struct vector 
{
    int x ; 
    int y;
}v;

int main() {

    v a[10];
    int n;
    printf ("enter the number of vectors you have to enter but it must be less than 10.\n");
    scanf ("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf ("enter the dimentions of vector number %d :\n",i+1);
        printf ("enter the x dimention\n");
        scanf ("%d",&(a[i].x));
        printf ("enter the y dimention\n");
        scanf ("%d",&(a[i].y));
    }
    for (int j = 0; j < n; j++)
    {
        printf ("vector %d is (%d,%d)\n",j+1,(a[j].x),(a[j].y));
    }

    return 0;
}