// own strlen.
#include <stdio.h>
#include <string.h>

void lengthcounter (char string[])
{
    int i = 0 ;
    while (string[i]!='\0')
    {
        i++;
    }
    printf ("the lenght of given string is %d",i);
}

int main() {
    char *st = "ichigo kuroski";
    lengthcounter(st);
    return 0;
}