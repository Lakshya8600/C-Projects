#include<stdio.h>

int main()
{
	FILE * ptr;
	ptr = fopen("P2addition.exe","a");
	fprintf(ptr,"hello");
	
	fclose(ptr);
	return 0;
}
