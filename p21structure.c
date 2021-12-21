#include<stdio.h>

struct student
{
    int marks;
    char name; 
};

int main()
{
    struct student e1;
    e1.name = 'l';
    e1.marks = 51;

    printf("the name is %c and marks is %d\n", e1.name, e1.marks);

    return 0;
}