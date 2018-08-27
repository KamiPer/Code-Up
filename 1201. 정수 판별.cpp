#include <stdio.h>

int main()
{
	int num;
	
	scanf("%d", &num);
	if(num > 0)
		printf("양수");
	else if(num == 0)
		printf("0");
	else
		printf("음수");
}
