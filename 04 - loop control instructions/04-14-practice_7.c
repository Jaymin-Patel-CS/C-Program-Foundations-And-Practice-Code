// sum of the multiples of 8 up tp 10
#include <stdio.h>

int main(){
    int i = 1, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += (8*i) ;
    }
    printf ("the value of sum is %d",sum);
    return 0;
}