#include <stdio.h>

int main()
{
	int num[3], sum, i, max;
	
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	max = 0;
	for(i=0; i<3; i++)
	{
		if(max < num[i])
			max = num[i];
		sum += num[i];
	}	
	sum = sum - max;	
	if(max < sum)
		printf("yes");
	else if(max >= sum)
		printf("no");
}
