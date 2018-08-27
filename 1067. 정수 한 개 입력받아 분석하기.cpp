#include <stdio.h>

int main()
{
	long long int a;
	scanf("%lld", &a);
	if(a>0)
	{
		if(a%2==0)
		{
			printf("plus\neven");
		}
		else
		{
			printf("plus\nodd");
		}
	}
	if(a<0)
	{
		if(a%2==0)
		{
			printf("minus\neven");
		}
		else
		{
			printf("minus\nodd");
		}
	}
}
