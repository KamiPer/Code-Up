#include <stdio.h>

int main()
{
	char a, b, i;
	
	scanf("%c %c", &a, &b);
	for(i=a; i<b+1; i++)
		printf("%c ", i);
}
