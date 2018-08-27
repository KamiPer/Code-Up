#include <stdio.h>

int main()
{
	int a, res, i;
	
	scanf("%d", &a);
	res = a;
	for(i=1; i<a; i++)
		res *= a-i;
	printf("%d", res);
}
