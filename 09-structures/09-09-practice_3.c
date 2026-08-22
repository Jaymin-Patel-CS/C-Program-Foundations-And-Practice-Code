// sum of the two vectors.
// 2d vector.👌👌👌
#include <stdio.h>
#include <string.h>

typedef struct vector 
{
    int x ; 
    int y;
}v;

void sumofvct (v v1, v v2)
{
    int a = v1.x + v2.x;
    int b = v1.y + v2.y;
    printf ("The sum vector of the given vectors = (%d , %d)",a , b);
}

int main() {

    v a[10];
    int n;
    printf ("Enter the number of vectors you have to enter but it must be less than 10.\n");
    scanf ("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf ("Enter the dimentions of vector number %d named v%d:\n",i+1,i+1);
        printf ("Enter the x dimention\n");
        scanf ("%d",&(a[i].x));
        printf ("Enter the y dimention\n");
        scanf ("%d",&(a[i].y));
    }
    for (int j = 0; j < n; j++)
    {
        printf ("Vector %d named v%d is (%d,%d)\n",j+1,j+1,(a[j].x),(a[j].y));
    }
    int o1 , o2;
    printf ("Enter the number of the vectors of which you have to do addition.\n");
    printf ("The number of first vector in addition\n");
    scanf ("%d",&o1);
    printf ("The number of first vector in addition\n");
    scanf ("%d",&o2);

    sumofvct(a[(o1)-1] , a[(o2)-1]);
    
    return 0;
}
