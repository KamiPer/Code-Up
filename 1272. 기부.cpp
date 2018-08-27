#include <stdio.h>

int main()
{
	int a, b, john, bob;
	
	scanf("%d %d", &a, &b);
	if(a%2 == 1)
		john = a-(a/2);
	else
		john = a * 5;
		
	if(b%2 == 1)
		bob = b-(b/2);	
	else
		bob = b * 5;
		
	printf("%d", john + bob);
}
