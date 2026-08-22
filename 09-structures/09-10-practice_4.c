// arrow operator demonstration.
#include <stdio.h>
#include <string.h>

typedef struct mixture
{
    int num;
    char name[20];
} mix;


int main() {
    mix a , *ptr;
    ptr->num = 4;
    strcpy(ptr->name,"ulkiora");
    printf ("name of the espada number %d is %s",ptr->num,ptr->name);
    return 0;
}