#include <stdio.h>
#include <math.h>

void btod()
{
    int x, decimal = 0;
    printf("Firstly enter the number of bits you will use.\n");
    scanf("%d",&x);
    char a[(x+1)];
    printf("Enter your number in binary expration.\n");
    scanf("%s",a);
    for (int i = 0; a[i]!='\0'; i++)
    {
        int z = a[i]-'0';
        decimal += z*(pow(2,(x-i-1)));
    }
    printf("The value of binary number %s is this %d.\n",a,decimal);
}
void dtob()
{
    int x , temp , bits=0;
    printf("Enter your decimal number.\n");
    scanf("%d",&x);
    int original = x;
    temp = x;
    while (temp > 0)
    {
        bits++;
        temp = temp/2;
    }
    
    int binary[bits];
    for (int i = 0; x > 0; i++)
    {
        binary[(bits-1-i)] = x%2;
        x = x/2;
    }
    printf("the binary number of the decimal %d is ",original);
    for (int i = 0; i < bits; i++)
    {
        printf("%d",binary[i]);
    }
}

int main() {
    int choice;
    printf("enter the choice.\n");
    printf("1. binary to decimal.\n");
    printf("2. decimal to binary.\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        btod();
        break;
    case 2:
        dtob();
        break;
    default:
        printf("enter the valid number current one is wronge.\n");
        break;
    }
    

    return 0;
}