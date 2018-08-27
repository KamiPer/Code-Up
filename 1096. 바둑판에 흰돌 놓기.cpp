#include <stdio.h>

int main()
{
	int amt, x, y, i, j;
	int a[20][20] = {};
	scanf("%d", &amt);
	for(i=0; i<amt; i++)
	{
		scanf("%d %d", &x, &y);
		a[x][y] = 1;
	}
	for(i=1; i<=19; i++)
	{
		for(j=1; j<=19; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
