#include <stdio.h>
#include <string.h>

struct employ 
{
    int code;
    float salary ;
    char name [15];
};
void show (struct employ e)
{
    printf ("code = %d\nsalary = %f\nname = %s",e.code,e.salary,e.name);
}


int main() {
    struct employ e1 = {100 , 3002.2 , "grimjau"};
    show (e1);
}