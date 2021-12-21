#include <stdio.h>

int array(int array[])
{
	printf("array is as following:\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

int array_rev(int array[])
{
	int temp;
	for (int i = 0; i < 7 / 2; i++)
	{
		temp = array[i];
		array[i] = array[6 - i];
		array[6 - i] = temp;

	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	array(arr);
	array_rev(arr);
	
		for (int i = 0; i < 7; i++)
		{
			printf("%d ", arr[i]);
		}
	return 0;
}
