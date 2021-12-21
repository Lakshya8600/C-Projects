#include<stdio.h>
int sum(int a, int b)
{
	return a+b;
}
void printstar(int n)
{
	printf("%c",'*');
}
int main()
{
	int a, b, c ;
	a=4;
	b=5;
	c=sum(a,b);
	printf("%d",c);
	
	printstar(7);
	return 0;
}
