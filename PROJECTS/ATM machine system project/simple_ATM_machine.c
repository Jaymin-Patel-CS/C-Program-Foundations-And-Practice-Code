#include <stdio.h>
#include<string.h>

void pinchange(int old_pin)
{
    int pin,pin2;
    FILE *ptr;
    ptr = fopen("pin.txt" , "w");
    if (ptr == NULL)
    {
        printf("Error : the file 'pin.txt' is not present at program location.\n");
    }
    
    printf("Enter your pin\n");
    scanf("%d",&pin);
    
    if (pin==old_pin)
    {
        printf("Enter your new pin.\n");
        scanf("%d",&pin);
        if (pin>9999 || pin<1000)
        {
            printf("Only four digit is allowed in the pin.\n");
            return;
        }
        while(pin!=pin2)
        {
            printf("Confirm your new pin.\n");
            scanf("%d",&pin2);
        }
        fprintf(ptr,"%d",pin);
        printf("Your pin is changed successfuly.\n");
    }
    
    fclose(ptr);
    printf("------------------------------------------\n");
    return;
}

void balance()
{
    int current_balance;
    FILE *ptr;
    ptr = fopen("balance.txt","r");
    if (ptr == NULL)
    {
        printf("Error : the file 'balance.txt' is not present at program location.\n");
    }
    
    fscanf(ptr,"%d",&current_balance);
    printf("Current balance = %d\n",current_balance);
    fclose(ptr);
    printf("------------------------------------------\n");
    return;
}

void withdraw_cash()
{
    FILE *ptr,*ptrr ;
    int amount;
    int balance;

    ptrr = fopen("balance.txt","r");
    fscanf(ptrr,"%d",&balance);
    fclose(ptrr);
    if (ptrr == NULL)
    {
        printf("Error : the file 'balance.txt' is not present at program location.\n");
    }
    
    
    printf("Enter the Amount to withdraw.\n");
    scanf("%d",&amount);
    if (amount<=0)
    {
        printf("wronge amount : Enter valid amount.\n");
        return;
    }
    if (amount>balance)
    {
        printf("Balance is insufficient in account.\n");
        return;
    }
    
    ptr = fopen("balance.txt","w");
    fprintf(ptr,"%d",(balance-amount));
    if (ptr == NULL)
    {
        printf("Error : the file 'balance.txt' is not present at program location.\n");
    }
    fclose(ptr);

    printf("\nYour transition is done.\nYou can collect your cash from below.\nYour withdrawn cash is %d.\nYour remaining balance is %d\n",amount,balance-amount);
    printf("------------------------------------------\n");
    return;
}

void foreign()
{
    printf("\nCurrent service is unavailable.\n");
    printf("------------------------------------------\n");
    return;
}

int main() {
    int pin = 0,original_pin;
    int choice,count = 0;
    FILE *ptr;
    ptr = fopen("pin.txt","r");
    if (ptr == NULL)
    {
        printf("Error : the file 'pin.txt' is not present at program location.\n");
    }
    
    fscanf(ptr,"%d",&original_pin);
    while (pin!=original_pin)
    {
        if (count>0)
        {
            printf("Incorrect pin you have only %d attempt left\n",4-count);
        }
        
        printf("Enter your pin\n");
        scanf("%d",&pin);
        if (pin>9999 || pin<1000)
        {
            printf("Only four digit is allowed in the pin.\n");
            continue;
        }

        if (count==3)
        {
            printf("Your account is tempararily blocked.\n");
            return 0;
        }
        count++;
    }
    while (1)
    {
        printf("----------ATM MANNAGEMENT SYSTEM----------\n");
        printf("1.PIN change\n");
        printf("2.Check current balence.\n");
        printf("3.Withdraw cash.\n");
        printf("4.foreign transition.\n");
        printf("5.exit\n");
        printf("------------------------------------------\n");

        printf("Enter your choice.\n");
        scanf("%d",&choice);
        printf("------------------------------------------\n");

        switch (choice)
        {
        case 1:
            pinchange(original_pin);
            break;
        case 2:
            balance();
            break;
        case 3:
            withdraw_cash();
            break;
        case 4:
            foreign();
            break;
        case 5:
            printf("Thanks for using service.\n");
            return 0;
        default:
            printf("Enter valid choice.\n");
            break;
        }
    }
    
        
    return 0;
}