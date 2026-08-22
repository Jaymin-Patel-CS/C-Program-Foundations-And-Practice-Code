#include <stdio.h>

int main() {
    char s[30];
    printf ("enter the your name : ");
    gets (s);  // gets is used to take the input like scanf but this can store multiple words with spaces.
    puts (s);  // this is for output.
    // printf ("your name is %s.",s);
    return 0;
}