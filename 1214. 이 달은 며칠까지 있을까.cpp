#include <stdio.h>

int main()
{
	int a=0, b=0;
	scanf("%d %d", &a, &b);
	if(a%4==0 && a%100!=0 || a%400==0)
	{
		if(b == 2)
			printf("28");
		else if(b==4 || b==6 || b==9 || b==11)
			printf("30");
		else 
			printf("31");
	}
	else
	{
		if(b==2 || b==4 || b==6 || b==9 || b==11)
			printf("30");
		else 
			printf("31");
	}
}
