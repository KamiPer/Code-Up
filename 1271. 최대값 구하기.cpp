#include <stdio.h>

int main()
{
	int a, i, max=0;
	
	scanf("%d", &a);
	int num[a];
	for(i=0; i<a; i++)
		scanf("%d", &num[i]);
	for(i=0; i<a; i++)
		if(max < num[i])
			max = num[i];
	printf("%d", max);
}
