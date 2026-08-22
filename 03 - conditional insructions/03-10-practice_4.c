//greatest number finder
#include <stdio.h>

int main() {
    int number_1,number_2,number_3,number_4, greatest ;
    printf("enter the number_1\n");
    scanf("%d",&number_1);
    printf("enter the number_2\n");
    scanf("%d",&number_2);
    printf("enter the number_3\n");
    scanf("%d",&number_3);
    printf("enter the number_4\n");
    scanf("%d",&number_4);

    greatest = number_1;
    if (number_2 >greatest)
    {
        greatest = number_2;
    }
     if (number_3 >greatest)
    {
        greatest = number_3;
    }
     if (number_4 >greatest)
    {
        greatest = number_4;
    }
    printf("the greatest form this number is %d",greatest );
    return 0;
}