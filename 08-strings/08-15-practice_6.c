// the occurance calculater.
#include <stdio.h>

void occurance (char st[] ,char n)
{
    char *ptr = &st[0];
    int i = 0;
    for ( ptr; *ptr != '\0'; ptr++)
    {
        if (*ptr == n)
        {
            i++;
        }
    }
    printf ("your entered character is occured in your name %d times",i);
}

int main() {
    char st[30];
    //char ch[1];
    char n;
    printf ("enter your your name\n");
    gets(st);
    printf ("enter the character of which you have to calculate occurance\n");
    scanf ("%c",&n);
    occurance(st , n);
    return 0;
}