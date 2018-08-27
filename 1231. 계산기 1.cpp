#include <stdio.h>

int main()
{
	double a, c;
	char b;
	scanf("%lf%c%lf", &a, &b, &c);
	switch(b)
	{
		case '+' : printf("%.0lf", a+c); break;
		case '-' : printf("%.0lf", a-c); break;
		case '*' : printf("%.0lf", a*c); break;
		case '/' : printf("%.2lf", a/c); break;
	} 
}
