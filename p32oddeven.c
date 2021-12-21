#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);

    int a= num%2;
    if(a=0)
    {
        printf("%d is a even number", num);
    }

    else if(a=1)
    {
        printf("%d is a odd number", num);
    }


    getch();
    return 0;
}