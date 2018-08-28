#include <stdio.h>

int main()
{
	int n, r, i, np=1, mp=1, rp=1;
	
	scanf("%d %d", &n ,&r);
	
	for(i=n; i>0; i--)
		np *= i;
	for(i=n-r; i>0; i--)
		mp *= i;
	for(i=r; i>0; i--)
		rp *= i;
	
	printf("%d", np/(mp*rp));
}
