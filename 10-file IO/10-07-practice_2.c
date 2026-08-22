// 3 integer reading.
#include <stdio.h>

int main() {
    FILE *ptr;
    int c;
    ptr = fopen("num.txt","r");
    for (int i = 0; i < 3; i++)
    {
        fscanf(ptr,"%d",&c);
        printf ("integer %d is %d\n",i+1,c);
    }
    
    return 0;
}