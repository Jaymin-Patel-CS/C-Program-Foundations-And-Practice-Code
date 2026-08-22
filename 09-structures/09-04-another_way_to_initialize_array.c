#include <stdio.h>

struct employ 
{
    int code ; 
    float salary;
    char name [15];
};


int main() {
    
struct employ luffy = {100,100.01 , "luffy"};
printf ("the data of the first employ is below\n");
printf ("code = %d\n",luffy.code);
printf ("salary = %f\n",luffy.salary);
printf ("name = %s\n",luffy.name);

    return 0;
}