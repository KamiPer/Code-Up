#include <stdio.h>

int main()
{
	int hour, min;
	
	scanf("%d %d", &hour, &min);
	if(hour == 0)
	{
		if(min < 30)
		{
			hour = 23;
			min = 60 - (30-min);
			printf("%d %d", hour, min);
		}
		else
		printf("%d %d", hour, min-30);
	}
	else
	{
		if(min < 30)
		{
			hour--;
			min = 60 - (30-min);
			printf("%d %d", hour, min);
		}
		else
		printf("%d %d", hour, min-30);
	}
}
