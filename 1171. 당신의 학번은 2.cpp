#include <stdio.h>

int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	if(b < 10)
	{
		if(c < 10)
			printf("%d0%d00%d", a, b, c);
		else if(c < 100)
			printf("%d0%d0%d", a, b, c);
		else
			printf("%d0%d%d", a, b, c);
	}
	else
	{
		if(c < 10)
			printf("%d%d00%d", a, b, c);
		else if(c < 100)
			printf("%d%d0%d", a, b, c);
		else
			printf("%d%d%d", a, b, c);
	}	
}
