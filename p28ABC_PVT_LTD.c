#include<stdio.h>
#include <stdlib.h>

int lengthtake(int a)
{
    printf("Enter the length of your ID\n");
    scanf("%d", &a);

}

int main()
{
    int a;
    for (int i = 1 ; i < 4; i++)
    {
        lengthtake(a);
        int *ptr;
        ptr = (int *) malloc(a*sizeof(char));
         printf("employee %d :\n", i);
        //char name[a];
        printf("enter your employee id\n");
        //scanf("%s", &name);       
       
        free(ptr);

    }
    

    return 0;
}