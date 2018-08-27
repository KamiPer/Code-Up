#include <stdio.h>

int main()
{
	int a, b, c;
	
	scanf("%d %d", &a, &b);
	if(a%b == 0)
	{
		c = a/b;
		printf("%d*%d=%d", b, c, a);
	}
	else if(b%a == 0)
	{
		c = b/a;
		printf("%d*%d=%d", a, c, b);
	}
	else
		printf("none");
}
