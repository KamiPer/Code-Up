#include <stdio.h>

int main()
{
	int num;
	
	scanf("%d", &num);
	if(num%10 == 1)
	{
		if(num == 11)
			printf("%dth", num);
		else
			printf("%dst", num);
	}
	else if(num%10 == 2)
	{
		if(num == 12)
			printf("%dth", num);
		else
			printf("%dnd", num);
	}
	else if(num%10 == 3)
	{
		if(num == 13)
			printf("%dth", num);
		else
			printf("%drd", num);
	}
	else
		printf("%dth", num);
}
