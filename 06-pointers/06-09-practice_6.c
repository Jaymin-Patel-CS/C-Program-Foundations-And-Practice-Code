// the value can't be change by the call by value function (demonstration).
#include <stdio.h>

int tentimeincreaser (int a);

int main() {
    int a = 1;
    printf ("the value of a before function is %d\n",a);
    tentimeincreaser (a);
    printf ("the value of a after function is %d\n",a);
    // the value doesn't change cuz the call by value function cannot change the real value.
    return 0;
}

int tentimeincreaser (int a){
    return a*10;
}
