#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number;
    srand (time(0)); // time is the function
    number =  (rand()%100) + 1; // rand is function to generate random number comes under stdlib.h library
    printf ("the number is %d",number);

    return 0;
}