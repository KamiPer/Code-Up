#include <stdio.h>

int main()
{
	int length, square=0, max=0, i;
	
	scanf("%d", &length);
	length = length / 2;
	for(i=1; i<length; i++)
	{
		square = (length-i) * i;
		if(max < square)
			max = square;
	}
	printf("%d", max);
}
