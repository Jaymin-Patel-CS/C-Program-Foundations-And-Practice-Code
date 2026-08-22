// present or not.
#include <stdio.h>

void areyouhere (char st[] , char n)
{
    char *ptr = st;
    int i;
    for (ptr; *ptr != '\0'; ptr++)
    {
        if (*ptr == n)
        {
            i = 1;
        }
    }
    if (i == 1)
    {
        printf ("your entered character is present in your entered name.\n");
    }else
    {
        printf ("your entered character is not present in your entered name.\n");
    }
    
}
int main() {
    char st[30];
    char n;
    printf ("enter your your name:\n");
    gets(st);
    printf ("enter the character of which you have to see the presence:\n");
    scanf ("%c",&n);
    areyouhere(st , n);
    return 0;
}