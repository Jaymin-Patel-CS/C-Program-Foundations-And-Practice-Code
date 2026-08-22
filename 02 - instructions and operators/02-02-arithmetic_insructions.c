#include <stdio.h>
#include <math.h>

int main() {
    int a = 4;                      //   +-*/ are called as operators
    int b = 2;                      //   int , float , char are called as operands
    int z ;
    z = a*b; // legal operation
    // a*b = z; // illegal operation

    printf ("the value of a + b is: %d \n",a+b);  // this is called as arithmatic insructions
    printf ("the value of a - b is: %d \n",a-b);  // this is called as arithmatic insructions
    printf ("the value of a * b is: %d \n",a*b);  // this is called as arithmatic insructions
    printf ("the value of a / b is: %d \n",a/b);  // this is called as arithmatic insructions
    printf ("the value of z is: %d",z);

    printf ("when 5 divided by 2 leaves remainder %d \n",5%2);    // sign of the remainder
    printf ("when -5 divided by 2 leaves remainder %d \n",-5%2);  // is always sign of numerator.
    printf ("when 5 divided by -2 leaves remainder %d \n",5%-2);  // thats why line 18 gives the
                                                                  //  wronge ans.
    // no operators are assumed to be present like (4)(5)= 20 this is not applied here.
    //  2^2 = 4 is not applied here
    // if we want to use the power function, we can use below funtion 
    //( to use this we want to include library of math whichh is '#include <math.h>')

    // if we do operation of 5/2 it gives 2 (rounded to nearest integer)
    // but if we do operation of 5.0 / 2 it will result as 2.5 (which we want)
    
    printf ("the value of 2^5 is %f \n",pow (2,5));
    return 0;
}