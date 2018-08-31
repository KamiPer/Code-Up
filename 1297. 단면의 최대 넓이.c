#include <stdio.h>

int main()
{
	int length, square=0, max=0, len=0, i;
	
	scanf("%d", &length);
	for(i=1; i<length; i++)
	{
		square = (length-(i*2)) * i;
		if(max < square)
		{
			max = square;
			len = i;
		}
	}
	printf("%d", len);
}
