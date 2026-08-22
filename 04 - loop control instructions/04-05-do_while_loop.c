#include <stdio.h>

int main() {
    int  a = 0;

    do
    {                               // do while loop is a while loop which will occurs
        printf("%d,",a++);         //  at least once
    } while (a<10);
   
   
    // while (a<10)
    // {
    //      printf("%d,",a++);
    // }
    

    return 0;
}