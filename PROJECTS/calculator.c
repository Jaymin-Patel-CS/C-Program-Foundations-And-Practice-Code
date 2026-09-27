#include <stdio.h>
#include <string.h>
#include <math.h>

int num1(char equation[], int a, int b, char operator)
{
    int num1 = 0;
    int countnum1 = 0;

    for (int i = 0; i < b; i++)
    {
        if (equation[i] == ' ' || equation[i] == operator || equation[i] == '\0' || equation[i] == '\n')
        {
            break;
        }
        countnum1++;
    }

    int arrnum1[countnum1];
    for (int i = 0; i < countnum1; i++)
    {
        arrnum1[i] = equation[i] - 48;
    }

    int base = 1;
    for (int i = 0; i < countnum1; i++)
    {
        num1 += (arrnum1[countnum1 - 1 - i]) * base;
        base *= 10;
    }

    return num1;
}

int num2(char equation[], int a, int b, char operator)
{
    int num2 = 0;
    int countnum2 = 0;

    int startpointofnum2 = 0;
    for (int i = 0; i < b; i++)
    {
        if (equation[i] == operator)
        {
            startpointofnum2 = i + 1;
            while (equation[startpointofnum2] == ' ')
            {
                startpointofnum2++;
            }
            break;
        }
    }

    for (int i = startpointofnum2; i < b; i++)
    {
        if (equation[i] < '0' || equation[i] > '9')
        {
            break;
        }
        countnum2++;
    }

    int arrnum2[countnum2];
    for (int i = 0; i < countnum2; i++)
    {
        arrnum2[i] = equation[startpointofnum2 + i] - 48;
    }

    int base = 1;
    for (int i = 0; i < countnum2; i++)
    {
        num2 += (arrnum2[countnum2 - 1 - i]) * base;
        base *= 10;
    }

    return num2;
}

int addition(int a, int b)
{
    return a + b;
}

int substraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return (b != 0) ? (a / b) : 0;
}

int main()
{
    int a;
    char operator;

    printf("Enter the number of digits of the bigger number you are dealing with : \n");
    scanf("%d", &a);
    getchar();

    int b = (a * 2) + 4;
    char equation[b];

    printf("Enter your expretion.\n");
    fgets(equation, sizeof(equation), stdin);

    for (int i = 0; i < b; i++)
    {
        if (equation[i] == '+')
        {
            operator = '+';
            int sum = addition(num1(equation, a, b, operator), num2(equation, a, b, operator));
            printf("Answer to your expretion is %d.\n", sum);
            break;
        }
        if (equation[i] == '-')
        {
            operator = '-';
            int sum = substraction(num1(equation, a, b, operator), num2(equation, a, b, operator));
            printf("Answer to your expretion is %d.\n", sum);
            break;
        }
        if (equation[i] == '*' || equation[i] == 'x')
        {
            operator = '*';
            int sum = multiplication(num1(equation, a, b, operator), num2(equation, a, b, operator));
            printf("Answer to your expretion is %d.\n", sum);
            break;
        }
        if (equation[i] == '/')
        {
            operator = '/';
            int sum = division(num1(equation, a, b, operator), num2(equation, a, b, operator));
            printf("Answer to your expretion is %d.\n", sum);
            break;
        }
    }

    return 0;
}