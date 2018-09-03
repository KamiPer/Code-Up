#include <stdio.h>

int main()
{
	int len, i, j;
	
	scanf("%d", &len);
	for(i=1; i<=len; i++)
	{
		for(j=0; j<i; j++)
			printf("*");
		printf("\n");
	}
	
}
