// lower case ditector
#include <stdio.h>

int main() {
    char alphabet;
    printf ("enter your character here\n");
    scanf ("%c",&alphabet);

    if (alphabet<=122 && alphabet>=97 )
    {
        printf ("your alphabet is lowercase");
    }
    else {
        printf ("your alphabet is not lowercase");
    }

    return 0;
}