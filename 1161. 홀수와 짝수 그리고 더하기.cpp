#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	if(a%2 == 0)
		printf("¦��");
	else
		printf("Ȧ��");
		
	printf("+");
	
	if(b%2 == 0)
		printf("¦��");
	else
		printf("Ȧ��");
		
	printf("=");
	
	if((a+b)%2 == 0)
		printf("¦��");
	else
		printf("Ȧ��");
}
