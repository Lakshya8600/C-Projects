#include<stdio.h>

int main()
{
	int array[]={4,5,6,7,8,9,5,4};
	printf("the value of array[4] is %d \n", array[4]);
	 
	 /*array starts from 0 */
	 
	int *ptr = &array[0];
	printf("the address of array[0] is %d", ptr);
	return 0;
}
