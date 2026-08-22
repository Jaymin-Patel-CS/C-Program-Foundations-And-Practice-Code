// table of number n 
#include <stdio.h>

int main() {
    int n;
    int i;
    printf("enter the value of n\n");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}