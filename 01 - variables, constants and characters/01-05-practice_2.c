#include <stdio.h>

int main() {
    int radius;
    float pi = 3.14;
    int height;
    printf ("enter radius of a circle\n");
    scanf ("%d",&radius);

    float area = radius*radius*pi;

    printf ("area of the circle is %f \n",area);

    printf ("enter height of the cylinder made by given circle is \n");
    scanf ("%d",&height);
    
    printf ("volume of the cylinder is %f",area*height);
    return 0;
}