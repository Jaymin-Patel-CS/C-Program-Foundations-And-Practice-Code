#include <stdio.h>

void starpattern (int a)
{
    for (int i = a; i > 0 ; i--)
    {
        for (int j = 0; j < i; j++)
        {   
            printf("*");
            if (i==1)
            {
                continue;
            }
            
            printf(" ");
        }

        printf("\n");
    }
    
}

int main() {
    int a;
    printf("Enter the value of a.");
    scanf("%d",&a);
    starpattern(a);
    return 0;
}