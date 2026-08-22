#include <stdio.h>

int main() {
    int a = 1;
    int *_p = &a;

    printf ("the value of a is %d\n",a);
    printf ("the value of _p is %u\n",_p);
    _p++;
    printf ("the value of _p is %u\n",_p);

    /*here by the _p++ the value of address of a is increased by 4 cuz 
    the memory of the int variable is 4  but in the case of char variable
    the increment will only be of 1*/

    char i = 'A' ;
    char *_pp = &i;
    printf ("the variable i is %c\n",i);
    printf ("the value of _pp is %u\n",_pp);
    _pp++;
    printf ("the value of _p is %u\n",_pp);
    
    // float follow the same rule as int pointer arithematic.

    float x = 5.5;
    float *_ppp = &x;

    printf ("the value of x is %f\n",x);
    printf ("the value of _ppp is %u\n",_ppp);
    _ppp++;
    printf ("the value of _p is %u\n",_ppp);

    return 0;
}