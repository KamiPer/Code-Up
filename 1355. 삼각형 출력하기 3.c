#include <stdio.h>

int main()
{
	int a, i ,j, k;
	
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		for(j=a; j>i-1; j--)
			printf("*");
		printf("\n");
		for(k=0; k<i; k++)
			printf(" ");
	}
}
