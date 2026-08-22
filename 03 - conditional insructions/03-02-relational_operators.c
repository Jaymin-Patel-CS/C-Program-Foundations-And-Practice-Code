#include <stdio.h>

int main() {
    int age;
    printf ("enter your age\n");
    scanf ("%d",&age);

    if (age<90){                                //  = sign is to assign a things but 
        printf ("you can drive\n");             // if you want to show equality the the sign 
    }                                           // is ==   .  the sign of inequality is !=
    else {
        printf ("you can't drive\n");
    }
    if (age>=50){                                     // if you write age=50 instade 
        printf ("you already passed half century");   // of age==50 it shows positive when
    }                                                 //  you write non zero number
    return 0;
}