#include <stdio.h>

int main()
{
	int num[10], i, count=0;
	
	for(i=0; i<10; i++)
		scanf("%d", &num[i]);
	for(i=0; i<10; i++)
	{
		if(num[i]%5 == 0)
		{
			printf("%d", num[i]);
			count++;
			break;
		}
	}
	if(count == 0)
		printf("0");
}
