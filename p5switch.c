#include<stdio.h>

int main()
{
	int a, b=0;
	printf("enter your age\n");
	scanf("%d", &a);
	
	switch(a)
	{
	case 18:

		printf("you cannot vote\n");
		break;

	defalt:
	   printf("you can vote");
		break;
	}
	return 0;
}
