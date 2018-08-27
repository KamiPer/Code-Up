#include <stdio.h>

int main()
{
	int lotto[7], num[6], same, i, j, bonus;
	
	for(i=0; i<7; i++)
		scanf("%d", &lotto[i]);
	for(i=0; i<6; i++)
		scanf("%d", &num[i]);
	for(i=0; i<7; i++)
		for(j=0; j<6; j++)
			if(lotto[i] == num[j])
			{
				if(i == 6)
					bonus = 1;
				else
					same++;
			}
	if(same == 6)
		printf("1");
	else if(same==5 && bonus == 1)
		printf("2");
	else if(same == 5)
		printf("3");
	else if(same == 4)
		printf("4");
	else if(same == 3)
		printf("5");
	else
		printf("0");
}
