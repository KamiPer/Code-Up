#include <stdio.h>

int main()
{
	int len, i, j;
	
	scanf("%d", &len);
	for(i=len; i>0; i--)
		for(j=0; j>i; j++)
			printf("*");
}
