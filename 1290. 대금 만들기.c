#include <stdio.h>

int main()
{
	int num, cnt=0, i;
	
	scanf("%d", &num);
	for(i=1; i<num; i++)
		if(num%i == 0)
			cnt++;
	printf("%d", cnt);
}
