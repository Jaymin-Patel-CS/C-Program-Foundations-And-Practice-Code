#include <stdio.h>

int main() {
    FILE *ptr ;
    int  a = 11;
    ptr = fopen ("generated.txt","w");
    fprintf (ptr,"the value of a is %d.\n",a);
    fprintf(ptr , "wow! you learned how to write in the file.\n",a);
    return 0;
}