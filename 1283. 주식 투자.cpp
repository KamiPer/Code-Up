#include <stdio.h>

int main()
{
	int money, day, percent, i;
	double per, benefit = 0, total = 0;
	
	scanf("%d", &money);
	scanf("%d", &day);

	for(i=0; i<day; i++)
	{
		scanf("%d", &percent);
		per = percent / 100.0;
		if(i == 0)
			total = money + ((double)money * per);
		else if (i != 0) 
			total = total + (total * per);
	}
	
	benefit = total - money;
	printf("%.0lf\n", benefit);
	
	if(benefit > 0)
		printf("good");
	else if(benefit == 0)
		printf("same");
	else
		printf("bad");
}
