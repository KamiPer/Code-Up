#include <stdio.h>

int main()
{
	char arr[100], i;
	
	gets(arr);
	for(i=0; ; i++)
	{
		if(arr[i] == NULL)
			break;
		else if(arr[i] == ' ')
			printf(" ");
		else if(arr[i] == 'x')
			printf("a");
		else if(arr[i] == 'y')
			printf("b");
		else if(arr[i] == 'z')
			printf("c");
		else
			printf("%c", arr[i]+3);
	}
		
}
