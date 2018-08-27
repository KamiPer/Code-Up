#include <stdio.h>

int main()
{
	int a, b, c;
	float d, e, f, res;
	
	scanf("%f %d", &d, &a);
	scanf("%f %d", &e, &b);
	scanf("%f %d", &f, &c);
	res = (d*a) + (e*b) + (f*c);
	printf("%.1f", res);
	
}
