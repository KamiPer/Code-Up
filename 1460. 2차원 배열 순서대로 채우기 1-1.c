#include <stdio.h>

int main()
{
	int a, i, j;
	scanf("%d", &a);
	
	int arr[a][a];

	for(i=0; i<a; i++)
	{
		for(j=0; j<a; j++)
		{
			arr[i][j] = (i*a)+j+1;
			printf("%d ", arr[i][j]);
		}
			
		printf("\n");
	}
}

