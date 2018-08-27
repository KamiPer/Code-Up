#include <stdio.h>

int main()
{
	int year, s, old;
	
	scanf("%d %d", &year, &s);
	if(s <= 2)
		old = 2012-(year/10000+1900);
	else
		old = 2012-(year/10000+2000);
	printf("%d", old+1);
}
