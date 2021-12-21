#include<stdio.h>

void func(int array[])
{
	for(int i = 0 ; i < 6; i++)
	{
		printf("the value of %d is %d\n", i ,array[i]);
		
	}
	
}

int main()
{
	int arr[]={1,2,3,4,5,9};
	func(arr);
	return 0;
}
