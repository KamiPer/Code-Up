#include <stdio.h>

int main()
{
	int BMI;
	
	scanf("%d", &BMI);
	if(BMI <= 10)
		printf("����");
	else if(BMI <= 20)
		printf("��ü��");
	else if(BMI > 20)
		printf("��");
}
