// sum and average.
#include <stdio.h>

int sumavg (int a, int b , int *sum , float *avg);

int main() {
    int x , y , sum;
    float avg;
    printf ("enter the value of two numbers.\n");
    scanf ("%d",&x);
    scanf ("%d",&y);
    sumavg (x,y, &sum , &avg);
    printf ("the sum of the given numbers is %d and average is %f",sum,avg);
    return 0;
}

int sumavg (int a, int b , int *sum , float *avg){
    *sum = a + b;
    *avg = *sum/2;
}