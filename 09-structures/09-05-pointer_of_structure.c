#include <stdio.h>
#include <string.h>

struct employ 
{
    int code;
    float salary ;
    char name [15];
};


int main() {
    struct employ e1;
    struct employ *ptr;
    ptr = &e1;
    // (*ptr).code = 100;   // this is the basic method.
    // their is the alternate method to make our work easy.
    ptr->code = 100;
    printf ("code = %d",e1.code);
    return 0;
}