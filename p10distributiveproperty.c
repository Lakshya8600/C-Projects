#include<stdio.h>

int main()
{
    int a, b ,c=100;
    
    printf("enter our first number which is greater than 100(a)\n");
	scanf("%d",&a); 
	
	if(a>100)
	{
	    printf("enter our second number which is smaller than 100(b)\n");
	    scanf("%d",&b);

	     int d=100-b;
		if(b<100)
	    {
	    	printf("%d",a*1);printf(" x %d\n",b*1);
	    	printf("%d",a*1);printf("(%d",c*1);      printf(" - %d)\n",100-b);
	    	printf("%d",a*1);printf(" x %d - ",c*1); printf("%d x ",a*1);printf("%d\n",d);
			printf("%d -",a*1*100);printf(" %d\n",a*d);
			printf("%d",a*100-a*d);
			
			//printf("%d",100-b);printf(" x ");	    	
	    	
		}
		else if(b>100)
		{
			printf("you have entered b greater than 100 so we can't proceed\n");
		}
		
    }
	
	else if(a<100)
	{
		printf("you have entered th number less than 100 so can't proceed\n");
	}
	
	return 0;
}
