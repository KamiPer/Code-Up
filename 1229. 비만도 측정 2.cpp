#include <stdio.h>

int main()
{
	double k, kg, akg, BMI;
	
	scanf("%lf %lf", &k, &kg);
	if(150 <= k < 160)
		akg = ((k - 150.0)/2.0) + 50.0;	
	if(k >= 160) 
		akg = (k - 100.0) * 0.9;
	else if(k < 150)
		akg = k - 100.0;
		
	BMI = ((kg - akg)*100.0)/akg;
	
	if(BMI <= 10)
		printf("정상");
	else if(BMI <= 20)
		printf("과체중");
	else if(BMI > 20)
		printf("비만");
}
