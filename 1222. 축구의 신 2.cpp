#include <stdio.h>

int main()
{
	int time, score1, score2, i;
	
	scanf("%d %d %d", &time, &score1, &score2);
	score1++;
	if(time%5==0)
		score1--;
	for(i=0; i<(90-time)/5; i++)
	{
		score1++;
	}
	if(score1 == score2)
		printf("same");
	else if(score1 > score2)
		printf("win");
	else
		printf("lose");
}
