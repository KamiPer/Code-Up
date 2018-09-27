#include <stdio.h>

int main()
{
	char arr[100], love[5] = {"love"};
	scanf("%s", arr);
	
	if(strcmp(arr, love) == 0)
		printf("I love you.");
}
