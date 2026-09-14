#include <stdio.h>
#include <string.h>

void reverse(char *arr , int x)
{
    int i= 0;
    for ( i = 0; i < x/2; i++)
    {
        char reversed[x];
        for (i = 0; i < x/2; i++)
        {
            reversed[i] = arr[x-1-i];
        }
        for (int j = 0; i < x; j++)
        {
            arr[i] = reversed[i];
        }
        printf("The string have reversed if you access it from now , it will come reversed.");
    }
}

int main() {
    int a;
    printf("Enter your number.");
    scanf("%d",&a);
    char arr[a+1];
    printf("Enter yout string.");
    scanf("%s",arr);
    reverse(arr , strlen(arr));
    printf("The after reverse function.");
    printf("%s",arr);
    return 0;
}