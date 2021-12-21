#include<stdio.h>
#include<conio.h>

int main()
{

	int num, ok=1;
	printf("Enter the number whose multiplication table you want\n");
	scanf("%d",&num );
	
	do{
		
		printf("%d x %d = %d\n", num,ok, num*ok);
		ok= ok + 1;
	}while(ok<11);
	
	getch();
	
	return 0;
}
