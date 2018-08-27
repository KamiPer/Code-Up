#include <stdio.h>

int main()
{
	double k, kg, akg, BMI;
	
	scanf("%lf %lf", &k, &kg);
	akg = (k - 100) * 0.9;
	BMI = (kg - akg) * 100 / akg; 
	if(BMI <= 10)
		printf("정상");
	else if(BMI <= 20)
		printf("과체중");
	else if(BMI > 20)
		printf("비만");
}
