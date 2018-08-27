#include <stdio.h>

int main()
{
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%d", (a<b ? a:b)<c ? (a<b ? a:b):c);
}
