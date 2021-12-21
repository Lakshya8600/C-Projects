 #include<stdio.h>
 #include<conio.h>
 
 void main()
 {
 	int a,b;
 	printf("enter the number whose factorial you want\n");
 	scanf("%d", &a);
 	
 	for(int i=0 ; i <= a; i++)
 	{
	b = b*i;
	}
 	printf("%d", b);
 	
 	
 	getch();
 }
