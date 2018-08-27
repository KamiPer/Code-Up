#include <stdio.h>

int main()
{
	int a, b, res=0, i;
	
	scanf("%d %d", &a, &b);
	for(i=a; i<=b; i++)
	{
		if(i%2 == 1)
			res += i;
		else if(i%2 == 0)
			res -= i;
	}
	printf("%d", res);
}
