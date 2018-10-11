#include <stdio.h>

int main()
{
	int a, i ,j;
	scanf("%d", &a);
	
	int arr[a][a];
	
	for(i=0; i<a; i++)
	{
		for(j=a; j>0; j--)
		{
			arr[i][j] = i*a+j;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
