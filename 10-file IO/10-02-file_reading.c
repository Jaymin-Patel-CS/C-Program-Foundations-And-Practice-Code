#include <stdio.h>

int main() {
    FILE *ptr ;
    int num;
    int num2;
    ptr = fopen("num.txt","r");
    fscanf (ptr,"%d",&num);    // this is the brother of scanf.
    fscanf (ptr,"%d",&num2);
    fclose (ptr);     // when we are done with our work with file we must close it and it is good practice.
    printf ("the value of num is %d\n",num);
    printf ("the value of num is %d\n",num2);
    

    return 0;
}