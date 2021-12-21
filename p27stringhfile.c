#include<stdio.h>
#include<string.h>

int main()
{
    //printf("%s", strcat("hello", "world"));

    char name1[]= {"hello"};
    char name2[]= {"world"};

    printf("%s\n", strcat(name1, name2));

    printf("%d\n", strlen(name1));

    printf("%s\n", strrev(name1));

 // it also include strcpy() and strcmp()

    return 0;
}