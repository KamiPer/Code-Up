#include <stdio.h>

int main()
{
	double w, h, b, result;
	scanf("%lf %lf %lf", &w, &h, &b);
	result=w*h*b/8388608;
	printf("%.2lf MB", result);
}
