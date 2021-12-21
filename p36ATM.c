#include <stdio.h>
int main()
{
    int pin, num, pin1 = 1234;
    static int cash = 40000;
    printf("Enter your pin\n");
    scanf("%d", &pin);

    if (pin == pin1)
    {
        printf("what you want to do\n");
        printf("press 1 for cash enquiry\n");
        printf("press 2 for Cash withdraw\n");
        printf("press 3 for deposit cash\n");
        printf("press 4 for exit\n");
        scanf("%d", &num);

        if (num == 1)
        {
            printf("Your cash balance is :\n%d", cash);
        }
        else if (num == 2)
        {
            int withdraw;
            printf("Enter the amount you want to withdraw\n");
            scanf("%d", &withdraw);
            if (cash >= withdraw)
            {
                printf("your total balance is:\n%d ", cash - withdraw);
            }
            else
            {
                printf("you dont have enough money\n");
            }
        }
        else if (num == 3)
        {
            int debit;
            printf("Enter the amount you want to debit\n");
            scanf("%d", &debit);
            printf("your total balance is:\n%d ", cash + debit);
        }
        else if(num==4)
        {
            goto exit;
        }
    }

    else
    {
        printf("your pin is wrong");
    }
    exit:

    return 0;
}