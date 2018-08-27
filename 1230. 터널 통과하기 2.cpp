#include <stdio.h>

int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	if(170>=a || 170>=b || 170>=c)
	{
		printf("CRASH ");
		if(170>=a)
			printf("%d", a);
		else if(170>=b)
			printf("%d", b);
		else if(170>=c)
			printf("%d", c);
	}
		
		
	else
		printf("PASS");
}
