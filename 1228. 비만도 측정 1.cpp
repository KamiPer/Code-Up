#include <stdio.h>

int main()
{
	double k, kg, akg, BMI;
	
	scanf("%lf %lf", &k, &kg);
	akg = (k - 100) * 0.9;
	BMI = (kg - akg) * 100 / akg; 
	if(BMI <= 10)
		printf("����");
	else if(BMI <= 20)
		printf("��ü��");
	else if(BMI > 20)
		printf("��");
}
