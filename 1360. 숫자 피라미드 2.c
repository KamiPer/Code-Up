#include <stdio.h>

int main()
{
	int num, i, j;
	
	scanf("%d", &num);
	for(i=num; i>0; i--)
	{
		for(j=0; j<i; j++)
			printf("%d ", i);
		printf("\n");
	}
}
