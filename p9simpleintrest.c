#include<stdio.h>

int main()
{
	float principal, rate, time,term ;
	
	printf("Enter your principal\n");
	scanf("%f", &principal);
	
	printf("Enter your rate\n");
	scanf("%f", &rate);
	
	printf("Enter your time (write the numerator only)\n");
	scanf("%f", &time);
	
	printf("Time is in which term (press 1 for years, 2 for  months, 3 for  days )\n");
	scanf("%f", &term);
	
	if(term == 1)
	{
	    printf("simple intrest is %f\n", (float)principal/100*rate*time);	
	}
	
	else if(term==2)
	{
		printf("simple intrest is %f\n", (float)principal/100*rate*time/12);
	}
	
	else if(term==3)
	{
		printf("simple intrest is %f\n", (float)principal/100*rate*time/365);
	}
	
	//	printf("simple intrest is %d\n", principal*rate*time/100*12);
	//printf("simple intrest is %d\n", principal*rate*time/100);
	//printf("simple intrest is %d\n", principal*rate*time/100);
	return 0;
}
