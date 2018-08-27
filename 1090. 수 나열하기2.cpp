#include <stdio.h>

int main()
{
	int a, b, c, i, res;
	scanf("%d %d %d", &a, &b, &c);
	res = a;
	
	for(i=1; i<c; i++)
		res *= b;
	printf("%d", res);	
	
}
