#include<stdio.h>

int main()
{
	int marks[5];
	int i=0;
	do{
		i= i + 1;
		printf("Enter the number %d of element of an array\n", i);
		scanf("%d", &marks[i]);
	}while(i<5);
	
	return 0;
}
