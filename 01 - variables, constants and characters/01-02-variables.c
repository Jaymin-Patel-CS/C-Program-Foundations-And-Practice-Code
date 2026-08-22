#include <stdio.h> // this is to take already prepared file in which we can code like printf

int main() // this is to start the code
{
    int a = 1; //for integers we use int
    float b = 1.2; //for non integers and real no we use float because in int code is correct but we cant use it to print
    char c = 'z'; /// for character we use char
    int d = 13 + 14 ;
    int e = 5;

    printf ("the value of a is %d. \n",a); // for integers
    printf ("the value of b is %f. \n",b); // for real no.
    printf ("the value of c is %c.\n",c ); // for characters.
    // for new line we type '\n' in the text to be printed.

    printf("sum of a and e is %d \n",a + e ); // for operations of maths
    printf ("the value of d is %d \n",d); 
    return 0; // return is to give fullstop to command
}