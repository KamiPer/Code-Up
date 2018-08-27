#include <stdio.h>

int main()
{
	int a, b, i;
	
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		scanf("%d", &b);
		if(a == 1)
			printf("%d %d %d", b, b, b);
		else if(i==1 || i==a || i==(a+1)/2)
			printf("%d ", b);
	}
		
		
}
