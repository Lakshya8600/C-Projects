#include <stdio.h>
#include <conio.h>
int main()
{
    char name[30], item[30];
    printf("enter name\n");
    scanf("%s", &name);

    printf("enter your item\n");
    scanf("%s", &item);
    char quantity[30];
    printf("enter quantity\n");
    scanf("%s", &quantity);

    int amount;

    printf("enter amount\n");
    scanf("%d", &amount);
 
    FILE*ptr = NULL ;

    ptr = fopen("dukan.txt","a");
    fprintf(ptr, "**********BILL**********\n\nNAME       - %s \n",name);
    fprintf(ptr, "ITEM        - %s \n",item);
    fprintf(ptr, "QUANTITY - %s \n",quantity);
    fprintf(ptr, "AMOUNT   - %d \n\n",amount);
    return 0;
}