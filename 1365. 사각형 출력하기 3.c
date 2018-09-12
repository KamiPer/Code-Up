#include <stdio.h>

int main()
{
	int num, i, j;
	
	scanf("%d", &num);
	
	for(i=0; i<num; i++)
		printf("*");
	printf("\n");
		
	for(i=2; i<=num-1; i++)
	{
		printf("*");
		for(j=1; j<num; j++)
		{
			if(j == i-1 || j == num-1 || j == num - i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	for(i=0; i<num; i++)
		printf("*");
}
