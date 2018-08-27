#include <stdio.h>

int main()
{
	int a, b=0, sum=0;
	
	scanf("%d", &a);
	while(a>sum)
	{
		b++;
		sum += b;
	}
	printf("%d", b);
}
