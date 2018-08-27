#include <stdio.h>

int main()
{
	int i;
	float a, b, plus, multiply, max, num[5];
	float minus, minus1, minus2;  
	float division, division1, division2;
	float square, square1 = 1, square2 = 1; 
	
	scanf("%f %f", &a, &b);
	plus = a + b;
	num[0] = plus;
	
	minus1 = a - b;
	minus2 = b - a;
	if(minus1 > minus2)
		minus = minus1;
	else
		minus = minus2;
	num[1] = minus;
	
	multiply = a * b;
	num[2] = multiply;
	
	division1 = a / b;
	division2 = b / a;
	if(division1 > division2)
		division = division1;
	else
		division = division2;
	num[3] = division;
	
	for(i=0; i<b; i++)
		square1 *= a;
	for(i=0; i<a; i++)
		square2 *= b;
	if(square1 > square2)
		square = square1;
	else
		square = square2;
	num[4] = square;
	
	max = plus;
	for(i=1; i<5; i++)
		if(max < num[i])
			max = num[i];
			
	printf("%.6lf", max);
}
