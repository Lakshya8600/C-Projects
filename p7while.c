#include<stdio.h>

int main()
{
	int a;
	printf("enter your number\n");
	scanf("%d", &a);
	
	while(a<50)
	{
		printf("%d\n", a);
		a= a + 1;
		
	}
	return 0;
	
}
