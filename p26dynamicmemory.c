#include<stdio.h>
#include<stdlib.h>
//#include<string.h>

struct student
{
    char name[30];
    int marks;

};

int main()
{
    struct student e1, e2;
    int *ptr;
    ptr= (int*) malloc(2*sizeof(int));

    printf("Enter your name\n");
    scanf("%s", &e1.name);

    printf("Enter your marks\n");
    scanf("%d", &e1.marks);

    printf("The marks of %s is %d\n", e1.name , e1.marks);
    free(ptr);

    int *ptr2;
    ptr = (int*) calloc(3, sizeof(int));
    printf("Enter your name\n");
    scanf("%s", &e2.name);

    printf("Enter your marks\n");
    scanf("%d", &e2.marks);

    printf("The marks of %s is %d\n", e2.name , e2.marks);
    free(ptr2);

    return 0;
}   