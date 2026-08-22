#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen ("sample.txt", "r");
    //ptr = fopen ("sample.txt", "w");
    printf ("%s",*ptr);
    return 0;
}