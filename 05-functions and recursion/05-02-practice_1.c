// gm gn and ga
#include <stdio.h>
void gm ();            
void ga ();
void gn ();

int main() {
    gm ();
    ga ();
    gn ();

// there are two type of functions
// 1. library fuctions : the functions which already exists like printf and stdio.h .
// 2. user defined functions : the function defined by the user like this practice_1 .
    return 0;
}

// we can call a function inside the function.

void gm (){
    printf ("good morning.\n");
    // like pasting here a function ga
};
void ga (){
    printf ("good afternoon.\n");
    // like pasting here a function gn
} 
void gn (){
    printf ("good night.\n");
}