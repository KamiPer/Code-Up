#include <stdio.h>

int main()
{
	int a, b, i, j;
	
	scanf("%d %d", &a, &b);
	for(i=a; i<b; i++)
		for(j=1; j<=9; j++)
			printf("%d*%d=%d\n", a, i, a*i);
}
