#include <stdio.h>
int main()
{
	int a, sum=0, i;
	scanf("%d", &a);
	for(i=0; i<=a; i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
	}
	printf("%d", sum);
}
