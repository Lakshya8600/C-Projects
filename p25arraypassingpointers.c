#include<stdio.h>

int arraywrite(int *ptr)
{
    for (int i = 0; i < 8; i++)
    {
        printf("%d", *(ptr + i));
    }
    printf("\n");

}
int main()
{
    int arr[]={0,1,2,3,4,5,6,7};
    arraywrite(arr);
    //printf("%d", sizeof(arr)/sizeof(int));    

    return 0;
}
