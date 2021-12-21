#include <stdio.h>

struct driver
{
	char name[50];
	char lino[50];
	char route[50];
	int kms[50];
};

int main()
{
	struct driver d0, d1, d2;

	printf("enter your name\n");
	scanf("%s", &d0.name);
	printf("enter your driving license number\n");
	scanf("%s", &d0.lino);
	printf("enter your route \n");
	scanf("%s", &d0.route);
	printf("how many kms you have travelled\n");
	scanf("%d\n", &d0.kms);

	printf("enter your name\n");
	scanf("%s", &d1.name);
	printf("enter your driving license number\n");
	scanf("%s", &d1.lino);
	printf("enter your route \n");
	scanf("%s", &d1.route);
	printf("how many kms you have travelled\n");
	scanf("%d\n", &d1.kms);

	printf("enter your name\n");
	scanf("%s", &d2.name);
	printf("enter your driving license number\n");
	scanf("%s", &d2.lino);
	printf("enter your route \n");
	scanf("%s", &d2.route);
	printf("how many kms you have travelled\n");
	scanf("%s\n", &d2.kms);

	printf("the name of first driver is %s\n",d0.name);
	printf("the driving license of first driver is %s\n",d0.lino);
	printf("the route of first driver is %s",d0.route);
	printf("the kms covered with first driver of first driver is %s\n",d0.kms);

	printf("the name of first driver is %s\n",d1.name);
	printf("the driving license of first driver is %s\n",d1.lino);
	printf("the route of first driver is %s\n",d1.route);
	printf("the kms covered with first driver of first driver is %s\n",d1.kms);

	printf("the name of first driver is %s\n",d2.name);
	printf("the driving license of first driver is %s\n",d2.lino);
	printf("the route of first driver is %s\n",d2.route);
	printf("the kms covered with first driver of first driver is %s\n",d2.kms);


	return 0;
}
