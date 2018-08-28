#include <stdio.h>

int main()
{
	int num, mul, i, j;
	
	while(1 > num || num > 9)
		scanf("%d", &num);
	for(i=1; i<=9; i++)
	{
		mul = num * i;
		for(j=0; j<mul; j++)
			printf("*");
		printf("\n");
	}
}
