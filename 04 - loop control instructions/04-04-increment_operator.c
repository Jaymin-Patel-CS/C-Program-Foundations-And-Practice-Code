#include <stdio.h>

int main() {
    int a = 5;
    printf ("the value of a after a++ is %d.\n",a++);
    // a++ means first print then increment
    printf ("the value of a after ++a is %d.\n",++a);
    // ++a means first increment than print
    // same thing is followed by a-- and a++
    printf("increment in a up to 10 is %d",a += 10);
    // += is custom addition operator. a += 10 means a is increased by 10
    // there is also a -= , *= , /= operators
    return 0;
} 
