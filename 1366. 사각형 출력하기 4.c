#include <stdio.h>

int main()
{
	int num, i, j, k;
	
	scanf("%d", &num);
	
	for(i=0; i<num; i++)
		printf("*");
	printf("\n");
		
	for(i=2; i<=num-1; i++)
	{
		printf("*");
		for(j=1; j<num; j++)
		{
			if(i == num/2+1)
				printf("*");
			else if(j == i-1 || j == num-1 || j == num - i)
				printf("*");
			else if(j == num/2)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	for(i=0; i<num; i++)
		printf("*");
}
