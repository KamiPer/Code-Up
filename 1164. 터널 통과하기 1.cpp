#include <stdio.h>

int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	if(170>=a || 170>=b || 170>=c)
		printf("CRASH");
	else
		printf("PASS");
}
