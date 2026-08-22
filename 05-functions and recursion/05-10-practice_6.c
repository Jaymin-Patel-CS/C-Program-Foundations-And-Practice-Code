// fibonacii sequence.
#include <stdio.h>

int fibonacii (int n);

int main() {
    int n ;
    
    printf ("enter the position of the element you want\n");
    scanf ("%d",&n);

    int element = fibonacii (n);
    printf ("the %dth element of the fibonacii sequence is %d", n , element);

    return 0;
}

int fibonacii (int n){

    if (n == 1)
    {
        return 0;
    }else if (n == 2){
        return 1;
    }
    else{
        return fibonacii(n-1) + fibonacii (n-2);
    }
    
}