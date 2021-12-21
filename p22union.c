#include<stdio.h>
#include<string.h>

union student
{
	int marks; 
	char name[30];

}lakshya;

int main()
{
	union lakshya;
	lakshya.marks = 45;
	strcpy(lakshya.name, "lakshya");
	
	printf("the marks of lakshya is %d \n", lakshya.marks);
	printf("the name  of lakshya is %s \n", lakshya.name);
	
	return 0;
}
