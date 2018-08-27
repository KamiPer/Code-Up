#include <stdio.h>

int main()
{
	int a;
	
	reload:
		scanf("%d", &a);
		printf("%d\n", a);
	if(a!=0)
	{
		goto reload;
	}

}
