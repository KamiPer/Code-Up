#include <stdio.h>

int main()
{
	int h, k, i, j, l;
	char dir;
	
	scanf("%d %d %c", &h, &k, &dir);
	int blank = h-1;
	if(dir == 'R')
		for(i=0; i<h; i++)
		{
			for(j=blank; j>0; j--)
				printf(" ");
			for(l=0; l<k; l++)
				printf("*");
			printf("\n");
			blank--;
		}
	
	else if(dir == 'L')
		for(i=0; i<h; i++)
		{
			for(j=blank; j<h-1; j++)
				printf(" ");
			for(l=0; l<k; l++)
				printf("*");
			printf("\n");
			blank--;
		}
}
