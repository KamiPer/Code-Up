#include <stdio.h>

int main()
{
	int a, b, c, max=0, i;
	
	scanf("%d %d %d", &a, &b, &c);
	for(i=1; i<=c; i++)
		if(a%i == 0 && b%i == 0 && c%i == 0)
			max = i;
	printf("%d", max);		
}
