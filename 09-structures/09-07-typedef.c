#include <stdio.h>
#include <string.h>

typedef struct employ 
{
    int code;
    float salary ;
    char name [15];
} emp ;

void show (struct employ e)
{
    printf ("code = %d\nsalary = %f\nname = %s",e.code,e.salary,e.name);
}

int main() {
    emp e1 = {100 , 3002.2 , "grimjaw"};
    // typedef helps us to give the name to the custsum datatype created by the programer.
    // like i gave the name to struct employ and that is emp.
    show (e1);
}