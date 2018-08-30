#include <stdio.h>

int main()
{
	int student, score, max=0, min=100, i;
	
	scanf("%d", &student);
	for(i=0; i<student; i++)
	{
		scanf("%d", &score);
		if(max <= score)
			max = score;
		else 
		{
			if(min >= score)
				min = score;
		}
	}
	printf("%d %d", max, min);
	
}
