#include <stdio.h>

int main() {
    int p = 'principle value';
    int r = 'rate';
    int t = 'time(in years)';
    printf ("enter the value of p \n");
    scanf ("%d",&p);
    printf ("enter the value of r \n");
    scanf ("%d",&r);
    printf ("enter the value of t \n");
    scanf ("%d",&t);
    printf ("the total interest in given principle value is %d",(p*r*t)/100);
    return 0;
}