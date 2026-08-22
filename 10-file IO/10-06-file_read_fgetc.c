#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("fgetcdemo.txt","r");
    char c;
    c = fgetc (ptr);
    while (c != EOF)
    {
        printf ("%c",c);
        c = fgetc (ptr);
    }
    fclose(ptr);
    return 0;
}