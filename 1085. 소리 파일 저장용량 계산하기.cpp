#include <stdio.h>

int main()
{
	double h, b, c, s, result;
	scanf("%lf %lf %lf %lf", &h, &b, &c, &s);
	result = h*b*c*s/8388608;
	printf("%.1lf MB", result);
}
