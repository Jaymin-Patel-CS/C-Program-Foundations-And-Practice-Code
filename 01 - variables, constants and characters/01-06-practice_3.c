#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;
    printf ("enter value of temperature in celsius");
    scanf ("%d",&celsius);
    printf ("the vlaue of temperature in fahrenheit is %f",(celsius*9.0/5.0)+ 32);
    return 0;
}