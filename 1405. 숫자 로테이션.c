#include <stdio.h>

int main()
{
	int num, i, j;
	scanf("%d", &num);
	int arr[num];
	
	for(i=0; i<num; i++)
		scanf("%d", &arr[i]);
	
	for(i=0; i<num; i++)
	{
		for(j=i; j<num; j++)
			printf("%d ", arr[j]);
		if(i >= 1)
			for(j=0; j<i; j++)
				printf("%d ", arr[j]);
		printf("\n");
	}
		
}
