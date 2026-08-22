// force by mass
#include <stdio.h>

float force (int a);

int main() {
    int mass;
    printf ("enter the value of mass in kg\n");
    scanf ("%d",&mass);
    float result = force (mass);
    printf ("the force exerted by the earth on the object of %d kg mass is %f Newton",mass , result);
    return 0;
}

float force (int a){
    return (float)(a * 9.8) ; 
}