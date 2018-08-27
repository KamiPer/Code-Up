#include <stdio.h>

int main()
{
	int a, i;
	scanf("%d", &a);
	for(i=0; i<=a; i++)
	{
		if(i%3==0)
		{
			continue;
		}
		printf("%d ", i);
	}
}
