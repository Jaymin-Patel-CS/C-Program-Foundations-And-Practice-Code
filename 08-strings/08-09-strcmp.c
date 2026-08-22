#include <stdio.h>
#include <string.h>

/*this strcmp function used to compare the two strings. if both are equal then it returns 0 .
if first mismatching character's ascai value diffrance is -ve then it retuens -1 if positive then returns +1. */

int main() {
    char st1[] = "jaymin";
    char st2[] = "jaimin";
    char st3[] = "jaymin";
    int a = strcmp (st1 , st2);
    int b = strcmp (st2 , st1);
    int c = strcmp (st1 , st3);
    printf ("1 --> 2 is %d\n",a);
    printf ("2 --> 1 is %d\n",b);
    printf ("1 --> 3 is %d\n",c);
    return 0;
}