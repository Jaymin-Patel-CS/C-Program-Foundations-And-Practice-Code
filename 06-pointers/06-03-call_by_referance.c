#include <stdio.h>

void wrong_swap (int a , int b); /*this is the wrong method to make a swap.*/
void swap (int *a , int *b);

int main() {
    int x = 1 ; 
    int y = 2 ;
    printf ("the value of a , b is %d , %d  respectively.\n",x,y);
    printf ("after swap\n");
//    wrong_swap (x,y); 
    swap (&x,&y);
    printf ("the value of a , b is %d , %d  respectively.\n",x,y);
    return 0;
}

void wrong_swap (int a , int b){   // wrong.
    int temp;
    temp = a ;
    a = b;
    b = temp;
}
void swap (int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}