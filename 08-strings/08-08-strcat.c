#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "jaymin ";
    char *str2 = "patel";
    strcat(str1,str2);
    printf ("now the str1 becomes : %s",str1);    
    return 0;
}