#include<stdio.h>

void printstar(int rows)
{   
    for(int i=0;i<rows;i++)
    {
    	for(int j=0;j<= i;j++)
    	{
    		printf("*");
		}
		printf("\n");
	}
	
}

void printstar_rev(int rows)
{
    for(int i=0 ;i<= rows ;i++)
    {
    	for(int j=0;j<= rows-i ;j++)
    	{
    		printf("*");
		}
		printf("\n");
	}	
	
}

int main()
{
	restart:
	int num, rows;
	printf("press 1 if you want triangular pattern and 0 for reverse triangular pattern\n");
	scanf("%d", &num);
	
	if (num==1)
	{
		printf ("enter the number of rows you want \n");
		scanf("%d", &rows);
		printstar(rows);
	}
    
    if(num==0)
    {
    	printf ("enter the number of rows you want \n");
		scanf("%d", &rows);
		printstar_rev(rows);
    	
	}
	
	int end;
		printf ("press 1 to restart and 0 to exit \n");
		scanf("%d", &end);
		
		//if(end==1);
        //{
        //	goto restart;
	    //}	
	    
	    if (end==0)
	    {
	    	goto last;
		}
	    
last:
	printf ("we are at end now \n");
return 0;
}
