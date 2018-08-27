#include <stdio.h>

int main()
{
	int a, i, count=0;
	
	scanf("%d", &a);
	for(i=1; i<=a; i++)
		if(i%2 == 1 && i%10 == 1)
			count++;
	printf("%d", count);
}
