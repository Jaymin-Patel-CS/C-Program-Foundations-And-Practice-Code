// own strcpy.
#include <stdio.h>

void copy2to1 (char *st1 ,char *st2)
{
    int i;
    for (i = 0; st2[i] != '\0'; i++)
    {
        st1[i] = st2[i];
    }
    st1[i] = '\0';
}

int main() {
    char s[] = "jaymin";
    char ss[10];
    copy2to1(ss,s);
    printf ("the first string s is %s\n",s);
    printf ("the first string ss is %s\n",ss);
    return 0;
}