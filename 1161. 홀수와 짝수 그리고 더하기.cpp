#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	if(a%2 == 0)
		printf("礎熱");
	else
		printf("�汝�");
		
	printf("+");
	
	if(b%2 == 0)
		printf("礎熱");
	else
		printf("�汝�");
		
	printf("=");
	
	if((a+b)%2 == 0)
		printf("礎熱");
	else
		printf("�汝�");
}
