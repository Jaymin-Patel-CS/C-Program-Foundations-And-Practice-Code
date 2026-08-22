// temperature converter.
#include <stdio.h>

float temperatureconverter (int a);

int main() {
    int a ;

    printf ("enter the value of temperature in celsius\n");
    scanf ("%d",&a);

    float result = temperatureconverter (a);
    printf ("The value of your temperature in fahrenheit is %f\n",result);

    return 0;
}

float temperatureconverter (int a){
    return (float)(a * 9 / 5) + 32 ;
}