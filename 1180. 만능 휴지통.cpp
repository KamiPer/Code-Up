#include <stdio.h>

int main()
{
	int a, b, c, res;
	
	scanf("%d", &a);
	b = a / 10;
	c = a % 10;
	res = ((c*10) + b) * 2;
	if(res > 100)
	{
		res = res - 100;
		printf("%d\n", res);
		if(res <= 50)
			printf("GOOD");
		else
			printf("OH MY GOD");
	}	
	else if(res <= 100)
	{
		printf("%d\n", res);
		if(res <= 50)
			printf("GOOD");
		else
			printf("OH MY GOD");
	}	
}
