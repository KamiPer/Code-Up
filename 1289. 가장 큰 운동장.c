#include <stdio.h>

int main()
{
	int a, b, res=0, max=0, i;
	
	for(i=0; i<3; i++)
	{
		scanf("%d %d", &a, &b);
		res = a * b;
		if(max < res)
			max = res;
	}
	printf("%d", max);
}
