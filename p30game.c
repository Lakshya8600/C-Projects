#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generate(int n)
{
	srand(time(NULL));
	return rand()%n;
}

int main()
{
	int a= generate(3);
	int b; 
	
	int points= 0;
	int compoints= 0;
	int ok= 0;
	printf("score 3 points to win the match\n points are showed in the order computer points : player points");

	
	do{
		printf("\n YOUR TURN\nPress \n 1 for rock \n 2 for paper \n 3 for scizzor\n");
		scanf("%d", &b);
		if(b==1)
		{
			printf("rock");
		}
	
		if(b==2)
		{
			printf("paper");
		}
	
		if(b==3)
		{
			printf("scissor");
		}
			printf("\n");
	
		printf("COMPUTER'S TURN\n");
		if (a==0)
		{
			printf("rock\n \n");

		if(b == 1)
		{
			printf("points %d : %d", compoints, points);		
		}
		
		if(b==2)
		{
			points = points + 1;
			printf("points %d : %d", compoints, points);
		}
		
		if(b==3)
		{
			compoints= compoints + 1;
			printf("points %d : %d", compoints, points);
		
		}
			
		}
	
		else if (a==1)
		{
			printf("paper\n \n");
		
		if(b == 2)
		{
			printf("points %d : %d", compoints, points);		
		}
		
		if(b==3)
		{
			points = points + 1;
			printf("points %d : %d", compoints, points);
		}
		
		if(b==1)
		{
			compoints= compoints + 1;
			printf("points %d : %d", compoints, points);
			
		}
		
		}	
	
		else if (a==2)
		{
			printf("scizzor\n \n");
	
		if(b == 3)
		{
			printf("points %d : %d", compoints, points);		
		}
		
		if(b==1)
		{
			points = points + 1;
			printf("points %d : %d", compoints, points);
		}
		
		if(b== 2)
		{
			compoints = compoints + 1;
			printf("points %d : %d", compoints, points);
			
		}
		printf("\n");	
		}
		ok++;
		if(points == 3)
		{
			goto here; 
		}
		else if(compoints == 3)
		{
			goto here;
		}

	} while(points < 3 || compoints < 3 );
	here:
	if(points==3)
	{
		printf("\n you WON" );
	}
	else if (compoints== 3)
	{
		printf("\n  LOST! BETTER LUCK NEXT TIME" );
	}
	
	return 0 ; 
}