#include <stdio.h>

int main()
{
	int length, i, j;
	
	scanf("%d", &length);
	for(i=0; i<length; i++)
	{
		for(j=0; j<length; j++)
			printf("*");
		printf("\n");
	}
	
}
