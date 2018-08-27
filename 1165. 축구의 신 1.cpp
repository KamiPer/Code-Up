#include <stdio.h>

int main()
{
	int time, score, i;
	
	scanf("%d %d", &time, &score);
	score++;
	if(time%5==0)
		score--;
	for(i=0; i<(90-time)/5; i++)
	{
		score++;
	}	
	printf("%d", score);
}
