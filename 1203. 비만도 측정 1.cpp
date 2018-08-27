#include <stdio.h>

int main()
{
	int BMI;
	
	scanf("%d", &BMI);
	if(BMI <= 10)
		printf("정상");
	else if(BMI <= 20)
		printf("과체중");
	else if(BMI > 20)
		printf("비만");
}
