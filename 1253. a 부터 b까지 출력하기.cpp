#include <stdio.h>

int main()
{
	int a, b, small, big, i;
	
	scanf("%d %d", &a, &b);
	if(a > b)
	{
		big = a;
		small = b;
	}
	else
	{
		big = b;
		small = a;
	}
	for(i=small; i<big+1; i++)
		printf("%d ", i);
}
