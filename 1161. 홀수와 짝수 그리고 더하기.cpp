#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	if(a%2 == 0)
		printf("Â¦¼ö");
	else
		printf("È¦¼ö");
		
	printf("+");
	
	if(b%2 == 0)
		printf("Â¦¼ö");
	else
		printf("È¦¼ö");
		
	printf("=");
	
	if((a+b)%2 == 0)
		printf("Â¦¼ö");
	else
		printf("È¦¼ö");
}
