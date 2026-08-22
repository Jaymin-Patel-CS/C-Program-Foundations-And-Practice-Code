// 10 times increaser.
#include <stdio.h>

int ten_times_increaser (int *a );

int main() {
    int a ;
    printf ("enter the value of a.\n");
    scanf ("%d",&a);
    printf ("the value of a before under going function is %d\n",a);
    ten_times_increaser (&a);
    printf ("the value of a after under going function is %d\n",a);

    return 0;
}

int ten_times_increaser (int *a){
    int temp;
    temp = *a ; 
    *a = ((*a)*10);
    return *a;
}