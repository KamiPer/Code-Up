#include <stdio.h>

int main()
{
	int num, i;
	scanf("%d", &num);
	int arr[num];
	
	for(i=0; i<num; i++)
		scanf("%d", &arr[i]);
		
	for(i=0; i<num; i++)
		printf("%d\n", arr[i]);
	for(i=0; i<num; i++)
		printf("%d\n", arr[i]);
	
}
