#include <stdio.h>
void display (); // funcion prototype. ( created to introduce function.)

int main() {
    printf ("next line printed by the function.\n");

    display (); // this is the function name to perform the function. this is called as function call.

    printf("function ends here.\n");
    return 0;
}


void display (){
    printf ("function performed.\n");   // function defination.
}
