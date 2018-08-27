#include <stdio.h>

int main()
{
	int a, i;
	int ary[23] = {}; 
	
	scanf("%d", &a);
	for(i=1; i<=a; i++)
		scanf("%d", &ary[i]);
	for(i=a; i>=1; i--)
		printf("%d ", ary[i]);
}
