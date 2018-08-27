#include <stdio.h>

int main()
{
	int old, year, birth, s;
	
	scanf("%d", &old);
	if(old <= 13)
	{
		s = 3;
		year = 2012 - (2000 + old);
		birth = year + 1;
		printf("%d %d", birth, s);
	}
	else
	{
		s = 1;
		year = 2012 - (2000 + old);
		birth = (2000 + year) - 1900 + 1;
		printf("%d %d", birth, s);
	}
}
