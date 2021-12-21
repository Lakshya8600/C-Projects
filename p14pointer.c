#include<stdio.h>

int main ()
{
	int a=4;
	int *ptra= &a;
	printf("the address of a is %d\n", &a);
	
	printf("the address of a is %f\n", &a);
	printf("the address of a is %x\n", &a);
	printf("the address of a is %p\n", &a);
	printf("the address of a is %c\n", &a);

	printf("the address of a is %d\n", *ptra );

	printf("the address of a is %d\n", ptra );
	
	printf("the address of a is %f\n", &a);
	
	printf("the address of a is %x\n", &a);
	
	printf("the address of a is %p\n", &a);
	
	printf("the address of a is %c\n", &a);
	return 0;
}
