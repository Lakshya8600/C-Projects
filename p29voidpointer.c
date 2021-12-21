#include<stdio.h>

int main()
{
    void *ptr ;
    int a = 45;
    ptr = &a ;

    printf("the value at pointer ptr is %d", (* (int*)  ptr )  );

    return 0;
}