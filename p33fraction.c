#include<stdio.h>

int main()
{
	int num, dum;
	printf("enter the numerator\n");
	scanf("%d", &num);
	
	printf("enter the denominator\n");
	scanf("%d", &dum);
	
	int num1=num , dum1= dum;
	int i;
	do{
	if(num%2==0 && dum%2==0)
	{
		num= num/2;
		dum= dum/2;
	}
	else if(num%3==0 && dum%3==0)
	{
		num= num/3;
		dum= dum/3;
	}
	else if(num%5==0 && dum%5==0)
	{
		num= num/5;
		dum= dum/5;
	}
	else if(num%7==0 && dum%7==0)
	{
		num= num/7;
		dum= dum/7;
	}
	else if(num%13==0 && dum%13==0)
	{
		num= num/13;
		dum= dum/13;
	}
	else if(num%17==0 && dum%17==0)
	{
		num= num/17;
		dum= dum/17;
	}
	else if(num%19==0 && dum%19==0)
	{
		num= num/19;
		dum= dum/19;
	}
	else if(num%11==0 && dum%11==0)
	{
		num= num/11;
		dum= dum/11;
	}
	i = i + 1;
    }while(i< 15);
    
    //printf("the numerator is %d\n", num);
	//printf("the denominator is %d\n", dum);
	
	if(num==num1 && dum==dum1)
	{
		printf("The fraction is already in standard form");
	}
	else{
		printf("The standard form is :\nthe numerator is %d\n", num);
	printf("the denominator is %d\n", dum);
	
	}
	return 0;
}
