#include <stdio.h>

int main()
{
	int num, max, min, i, flag = 0;
	
	for(i=0; i<5; i++)
	{
		scanf("%d", &num);
		if(flag == 0)
		{
			max = num;
			min = num;
			flag = 1;
		}
		if(max <= num)
			max = num;
		else if(min >= num)
			min = num;
	}
	
	printf("%d\n", max);
	printf("%d\n", min);	
}
