#include <stdio.h>

int main()
{
	int num, i, j;
	
	scanf("%d", &num);
	for(i=1; i<=6; i++)
		for(j=1; j<=6; j++)
			if(i + j == num)
				printf("%d %d\n", i, j);
}
