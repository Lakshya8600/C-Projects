#include<stdio.h>

int main()
{
	int a;
	printf("enter your number\n");
	scanf("%d", &a);
	
	do{
	
	    printf("%d\n",a);
	    	a = a+1;
	}while(a<50);
	return 0;
}
