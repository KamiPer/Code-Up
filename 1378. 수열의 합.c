#include <stdio.h>

int main()
{
	int num, sum=0, i, j;
	
	scanf("%d", &num);
	for(i=1; i<=num; i++)	
		for(j=1; j<=i; j++)
			sum += j;
	printf("%d", sum);
}
