#include <stdio.h>
#include <string.h>

int main() {
    char *st = "dingding";
    char st2[30];
    strcpy (st2 , st);  // this function is used to copy the string first is target and second is source.
    printf ("now the st2 is : %s",st2);
    return 0;
}