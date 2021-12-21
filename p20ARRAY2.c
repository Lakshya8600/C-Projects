#include<stdio.h>

int main()
{
	int marks[10];
	
    for(int i=0; i < 10; i++)
    {
    	printf("Enter the marks of student of roll no. %d\n", i);
    	scanf("%d", &marks[i]);
	}
	
	for(int i=0; i < 10; i++)
	{
		printf("the marks of roll no. %d is %d\n",i, marks[i]);
		
	}
	
	
	return 0;
}
