#include <stdio.h>

int main()
{
	int num, cnt=0, space=0, i, j;
	
	scanf("%d", &num);
	for(i=0; i<num; i++)
	{
		cnt = i*2+1;
		space = num/2 - i;
		for(j=0; j<=space-1; j++)
			printf(" ");
		for(j=0; j<cnt; j++)
			printf("*");
		if(cnt == num)
			break;
		printf("\n");
	}
}
