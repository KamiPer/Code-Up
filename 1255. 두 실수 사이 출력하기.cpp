#include <stdio.h>

int main()
{
	double a, b, i;
	
	scanf("%lf %lf", &a, &b);
	for(i=a; i<b+0.001; i+=0.01)
		printf("%.2lf ", i);
}
