#include <stdio.h>

int main()
{
	int a, i, cnt=0;
	
	scanf("%d", &a);
	int num[a];
	for(i=0; i<a; i++)
	{
		scanf("%d", &num[i]);
		if(num[i]%2 == 0)
			cnt++;
	}
	printf("%d", cnt);
}
