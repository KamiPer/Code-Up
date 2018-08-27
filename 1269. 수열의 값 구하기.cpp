#include <stdio.h>

int main()
{
	int a, b, c, n, i, res=0;
	
	scanf("%d %d %d %d", &a, &b, &c, &n);
	res = a;
	for(i=1; i<n; i++)
	{
		if(n == 1)
			break;
		res = res * b + c;
	}
	printf("%d", res);
}
