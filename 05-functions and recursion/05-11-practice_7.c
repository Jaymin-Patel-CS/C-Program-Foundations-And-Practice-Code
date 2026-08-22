// the compiler na nakhara
#include <stdio.h>

int main() {
    int a = 3;
    printf ("%d , %d , %d ", a , ++a , a++);
    return 0;
}

// don't think this programe will print * 3 , 4 , 4 * . this programe will print * 5 , 5 , 3 * because
// this depends on the behaviour of compiler here this compiler is taking the arcuments right to left. that's amazing. 