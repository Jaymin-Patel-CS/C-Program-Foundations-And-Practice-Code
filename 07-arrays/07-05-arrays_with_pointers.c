#include <stdio.h>

int main() {
    int element [4];
    int *p = &element[0];
    for (int i = 0 ; i < 4 ;i++)
    {
        if (i == 0)
        {
            printf ("enter the value of %dst element of arrays ",i+1);
            scanf ("%d",&element[i]);
        }else if (i == 1)
        {
            printf ("enter the value of %dnd element of arrays ",i+1);
            scanf ("%d",&element[i]);
        }else if (i == 2)
        {
            printf ("enter the value of %drd element of arrays ",i+1);
            scanf ("%d",&element[i]);
        }else
        {
            printf ("enter the value of %dth element of arrays ",i+1);
            scanf ("%d",&element[i]);
        }
    }
    
    printf ("the gvien arrays by you is : ");
    
    for (int i = 0;i<4; i++)
    {
        if (i==3)
        {
            printf ("%u.",*p);
        }else
        {
            printf ("%u,",*p);
            p++;
        }
    }
    
    return 0;
}