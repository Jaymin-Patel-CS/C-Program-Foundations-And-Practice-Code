#include <stdio.h>
#include <string.h>

struct employ 
{
    int code;
    float salary ;
    char name [10];
};

int main() {
    struct employ e1 , e2 , e3 ;

    printf ("enter the code of the employ e1\n");
    scanf ("%d",&e1.code);
    printf ("enter the salary of the employ e1\n");
    scanf ("%f",&e1.salary);
    printf ("enter the name of the employ e1\n");
    scanf ("%s",e1.name);

    printf ("enter the code of the employ e2\n");
    scanf ("%d",&e2.code);
    printf ("enter the salary of the employ e2\n");
    scanf ("%f",&e2.salary);
    printf ("enter the name of the employ e2\n");
    scanf ("%s",e2.name);

    printf ("enter the code of the employ e3\n");
    scanf ("%d",&e3.code);
    printf ("enter the salary of the employ e3\n");
    scanf ("%f",&e3.salary);
    printf ("enter the name of the employ e3\n");
    scanf ("%s",e3.name);

    printf ("the data of e1.\ncode = %d\nsalary = %f\nname = %s\n",e1.code,e1.salary,e1.name);
    printf ("the data of e2.\ncode = %d\nsalary = %f\nname = %s\n",e2.code,e2.salary,e2.name);
    printf ("the data of e3.\ncode = %d\nsalary = %f\nname = %s\n",e3.code,e3.salary,e3.name);
    return 0;
}