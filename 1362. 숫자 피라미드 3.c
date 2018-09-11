#include <stdio.h>

int main()
{
	int num, max=0, i, j;
	
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
		max += i;
		
	for(i=1; i<=num; i++)
	{
		for(j=0; j<i; j++)
			printf("%d ", max--);
		printf("\n");
	}
}
