#include <stdio.h>

int main()
{
	int h, r, i, j, k;
	
	scanf("%d %d", &h, &r);
	for(k=0; k<r; k++)
	{
		for(i=0; i<h; i++)
		{
			for(j=0; j<=i; j++)
				if(j == i) printf("*");
				else printf(" ");
			printf("\n");
		}
		for(i=h-1; i>0; i--)
		{
			for(j=1; j<=i; j++)
				if(j == i) printf("*");
				else printf(" ");
			printf("\n");
		}
	}
}
