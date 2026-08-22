#include <stdio.h>

int main() {
    FILE *ptr;
    // ptr = fopen("getcdemo.txt","r");
    //char a = fgetc (ptr);
    // printf ("%c",fgetc (ptr));
    // printf ("%c",fgetc (ptr));
    // printf ("%c",fgetc (ptr));
    // printf ("%c",fgetc (ptr));
    // printf ("%c",fgetc (ptr));
    // printf ("%c",fgetc (ptr));
    // fclose(ptr);
    ptr = fopen("fputcdemo.txt","w");
    fputc ('j',ptr);
    
    return 0;
}