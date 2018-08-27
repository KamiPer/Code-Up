#include <stdio.h>

int main()
{
	int a, i;
	
	scanf("%d", &a);
	for(i=1; ; i++)
	{
		if(a/10 != 0)
			a = a/10;
		else if(a/10 == 0)
		{
			printf("%d", i);
			break;
		}
	}
}
