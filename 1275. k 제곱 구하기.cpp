#include <stdio.h>

int main()
{
	int a, b, res=1, i;
	
	scanf("%d %d", &a, &b);
	for(i=1; i<=b; i++)
		res = res * a;
	printf("%d", res);
}
