#include <stdio.h>

int main()
{
	int num[10], i;
	for(i=0; i<10; i++)
		scanf("%d", &num[i]);
	
	int a;
	scanf("%d", &a);
	
	for(i=0; i<10; i++)
		if(i+1 == a)
			printf("%d", num[i]);
}
