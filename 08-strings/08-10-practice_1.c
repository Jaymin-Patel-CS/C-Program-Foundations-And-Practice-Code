// %c and %s input by both are equal.
#include <stdio.h>
#include <string.h>

int main() {
    char st1[10];
    char st2[10];
    char c;
    int a = 1;
    int i = 0;
    printf ("this vlaue will taken by the percentage s method.\n");
    printf ("enter your name\n");
    scanf ("%s",st1);
    printf ("the first string st1 is %s\n",st1);

    printf ("this value will taken by the percentage c method.\n");
    printf ("enter your name character by character\n");
    while (1)
    {
        
        scanf("%c", &c);
        fflush(stdin);
        if (c == '#') break;
        if (c == '\n') continue;
        st2[i] = c;
        i++;
    }
    st2[i] = '\0';
    printf ("the second string st2 is %s\n",st2);

    int b = strcmp(st1,st2);
    if (b==0)
    {
        printf ("both strings st1 and st2 are equal.");
    }else{
        printf ("both strings st1 and st2 are not equal.");
    }
    
    return 0;
}