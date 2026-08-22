// if we want to enter the marks of multiple students we use arrays. 
#include <stdio.h>

int main() {
    // without arrays the code seems like this-
    /* int mark1 , mark2 , mark3, mark4;
    mark1 = 21;
    mark2 = 22;
    mark3 = 23;
    mark4 = 24;*/
    // this method is not useful in the bulk of students.
    // to overcome typing fatigue the evolution of arrays happend.
    // the code by arrays
    int marks[4];
    marks[0];
    marks[1]= 22;
    marks[2]= 23;
    marks[3]= 24;
    // simply the arrays are the common variable for similar kind of variables.
    // to print this and scan this -
    printf("enter the value of marks1\n");
    scanf("%d",&marks[0]);
    printf("the value of marks1 is %d\n",marks[0]);
    return 0;
}