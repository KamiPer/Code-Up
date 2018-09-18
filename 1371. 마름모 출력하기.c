#include <stdio.h>

int main()
{
	int num, sum=0, i, j;
	
	scanf("%d", &num);
	for(i=num; i>0; i--)
	{
		for(j=1; j<i; j++) 
			printf(" ");
		printf("*");
		for(j=num; j>i; j--)
			printf("  ");
		printf("*");
		printf("\n");
	}
	for(i=0; i<num; i++)
	{
		for(j=0; j<i; j++) 
			printf(" ");
		printf("*");
		for(j=num; j>i+1; j--)
			printf("  ");
		printf("*");
		printf("\n");
	}
}
