#include <stdio.h>

struct item
{
    int id;
    char name[30];
    float price;
    int quantity;
};


void additem()
{
    int a;
    printf("Enter the number of unique items you have to add in inventory.\n");
    scanf("%d",&a);
    
    struct item item[a];

    FILE *ptr;
    ptr = fopen("inventory.txt","a");

    if (ptr == NULL)
    {
        printf("Error in opening file or file doesn't exist.");
        return;
    }
    for (int i = 0; i < a; i++)
    {
    printf("Enter your item ID : ");
    scanf("%d",&item[i].id);
    printf("Enter your item name : ");
    scanf("%s",item[i].name);
    printf("Enter your item price : ");
    scanf("%f",&item[i].price);
    printf("Enter your item quantity : ");
    scanf("%d",&item[i].quantity);
    fprintf(ptr ,"Item id = %d\nItem name = %s\nItem price = %.2f\nItem quantity = %d\n",item[i].id,item[i].name,item[i].price,item[i].quantity);
    }
    fclose(ptr);
    printf("Item added successfuly.\n");
    printf("-------------------------------------------------------------------------------\n");
}

void display()
{
    int c;
    FILE *ptr;
    ptr = fopen("inventory.txt","r");
    if (ptr == NULL)
    {
        printf("Error in opening file or file doesn't exist.\n");
        return;
    }
    
    c = fgetc(ptr);
    while (c!=EOF)
    {
        printf("%c",c);
        c = fgetc(ptr);
    }
    printf("\n------------------------------------------------------------------------------\n");
    fclose(ptr);
}

void reciept()
{
    float total = 0;
    FILE *ptr , *ptrr;
    ptr = fopen("inventory.txt","r");
    ptrr = fopen("reciept.txt","w");
    if (ptr == NULL || ptrr == NULL)
    {
        printf("Error in opening file or file doesn't exist.\n");
        if (ptr) fclose(ptr);
        if (ptrr) fclose(ptrr);
        return;
    }

    struct item item;
    
    while ((fscanf(ptr,"Item id = %d\nItem name = %s\nItem price = %f\nItem quantity = %d\n",&item.id,item.name,&item.price,&item.quantity)) == 4)
    {
        fprintf(ptrr,"Item id = %d\nItem name = %s\nItem price = %.2f\nItem quantity = %d\n , total price from this item = %f\n",item.id,item.name,item.price,item.quantity,(item.price) * (item.quantity));
        total +=(item.price)*(item.quantity);
    }
    fprintf(ptrr,"---------------------------------\n");
    fprintf(ptrr,"\nTotal expense = %.2f",total);
    printf("Reciept is created in the text file you can access it form your pc.\n");
    printf("------------------------------------------------------------------------------\n");
    fclose(ptr);
    fclose(ptrr);
}

void newinventory()
{
    FILE *ptr;
    ptr = fopen("inventory.txt","w");
    fclose(ptr);
    printf("Your new inventory is created you can access it form the second option 'Add item to inventory'.\n");
    printf("-------------------------------------------------------------------------------\n");
}

int main() {
    int choice;
    
    while (1)
    {
        printf("------------------------------------------------------------------------------\n");
        printf("* * * SHOP MANNAGEMENT SYSTEM * * *\n");
        printf("choose the option below.\n");
        printf("1 . create the new inventory.\n");
        printf("2 . Add item to inventory.\n");
        printf("3 . Display inventory.\n");
        printf("4 . Buy the items and generate the reciept.\n");
        printf("5 . Exit.\n");
        printf("Enter your choice.\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            newinventory();
            break;
        case 2:
            additem();
            break;
        case 3:
            display();
            break;
        case 4:
            reciept();
            break;
        case 5:
            printf("Thanks for coming in our shop.\n");
            return 0;
        default:
            printf("invalid number ,enter valid nuber.\n");
            break;
        }   
    }    
    return 0;
}