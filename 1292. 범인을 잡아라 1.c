#include <stdio.h>

int main()
{
	int DNA, sum=0, i, j;
	
	scanf("%d", &DNA);
	for(i=0; i<10; i++)
	{
		sum += DNA % 10;
		DNA = DNA / 10;
	}
	if(sum%7 == 4)
		printf("suspect");
	else
		printf("citizen");
}
