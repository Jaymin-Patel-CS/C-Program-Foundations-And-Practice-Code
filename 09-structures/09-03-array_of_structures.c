#include <stdio.h>
#include <string.h>

struct employ
{
    int code;
    float salary;
    char name[10];
};


int main() {

    struct employ facebook[10];
    // this is the way to make the multiple variables from the structures.
    // we can access this by below method.
    facebook[0].code = 100; 
    facebook[0].salary = 100.1; 
    strcpy(facebook[0].name,"kelly");
    printf ("this is the data of the first employ\ncode = %d\nsalary = %.2f\nname = %s",facebook[0].code,facebook[0].salary,facebook[0].name);

    return 0;
}