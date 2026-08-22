#include <stdio.h>

int main() {
    /*char arr[] = {'J','a','y','m','i','n','\0'};*/   
    // in the end of every string we need to add \0 to terminate it , if not then the compiler will be lost in memory to terminate it.
    
    // this is the basic method to make a string.
    // but the compiler offers us the better way to make the string.
    char str[] = "Jaymin Patel";
    char *ptr = &str[0];
    for (ptr; *ptr!='\0' ;ptr++)
    {
        printf("%c",*ptr);
    }
    return 0;
}