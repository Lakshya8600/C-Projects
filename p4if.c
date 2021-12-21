#include<stdio.h>

int main()
{
	int a;
	
	printf("In the exams of science and maths \nIn how many are you passed\n ");
	scanf("%d", &a );
	
	if(a==0){
		printf("Sorry you won't get any prize");
	}
	
	else if(a==1){
	printf("As you are passed in 1 subject you will get Rs15\n");	
	}

    else if(a==2){
    	printf("Congratulations you are passed in all the exams\nyou got Rs45\n");
	}
	return 0;
	
}
