#include <stdio.h>

int main()
{
	int a, b, res=0, i;
	
	scanf("%d %d", &a, &b);
	for(i=a; i<=b; i++)
	{
		if(i%2 == 1)
		{
			if(i == a)
				printf("%d", i);
			else
				printf("+%d", i);
			res += i;
		}
		else if(i%2 == 0)
		{
			printf("-%d", i);
			res -= i;
		}
	}
	if(res > 0)
		printf("=+%d", res);
	else
		printf("=%d", res);
}
