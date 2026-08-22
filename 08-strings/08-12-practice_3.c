// slicer.
#include <stdio.h>

void slicer (char *st , int m , int n)
{
    int i;
    for ( i = 0; (i+(m-1)) < n; i++)
    {
        st[i] = st[i+(m-1)];
    }
    st[i] = '\0';
}

int main() {
    int m,n;
    char st[] = "jayminpatel";
    printf ("enter starting pointing for slicing\n");
    scanf ("%d",&m);
    printf ("enter the end point for slicing\n");
    scanf ("%d",&n);
    slicer(st,m,n);
    printf ("the sliced string is %s",st);
    return 0;
}