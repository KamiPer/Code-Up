#include <stdio.h>

int main()
{
	char a = 'a', x;
	
	scanf("%c", &x);
	do
	{
		printf("%c ", a);
		a++;
	} while(x >= a);
}
