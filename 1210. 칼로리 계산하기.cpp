#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	if(a == 1 && b == 5 || a == 1 && b == 4)
		printf("no angry");
	else if(a == 2 && b == 5 || a == 2 && b == 4) 
		printf("no angry");
	else if(a == 3 && b == 5 || a == 3 && b == 4 || a == 3 && b == 3) 
		printf("no angry");
	else if(a == 4 && b == 5 || a == 4 && b == 4) 
		printf("no angry");
	else if(a == 5 && b == 5)
		printf("no angry");
	else
		printf("angry");
}
