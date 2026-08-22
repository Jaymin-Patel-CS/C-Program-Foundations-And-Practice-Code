#include <stdio.h>
void change(int a);
int main() {
    int b = 12;
    printf ("the value of b before change function is %d\n",b);
    change (b);
    printf ("the value of b after change function is %d\n",b);
    return 0;
}

void change (int a){
    a = 11;
}