#include <stdio.h>

int main()
{
	char arr[100];
	int i;
	
	gets(arr);
	for(i=0; ; i++)
	{
		if(arr[i] == NULL)
			break;
		else if(arr[i] >= 'A' && arr[i] <= 'Z')
			printf("%c", arr[i] + 32);
		else if(arr[i] >= 'a' && arr[i] <= 'z')
			printf("%c", arr[i] - 32);
		else
			printf("%c", arr[i]);
	}
}
