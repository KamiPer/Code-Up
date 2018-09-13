#include <stdio.h>

int main()
{
	int num, i, j, k;
	
	scanf("%d", &num);
	for(i=num; i>0; i--)
	{
		for(k=1; k<i; k++)
			printf(" ");
		for(j=0; j<num; j++)
			printf("*");
		printf("\n");
	}
}
