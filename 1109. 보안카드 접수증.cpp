#include <stdio.h>

int main()
{
	char name[21];
	int age;
	char club;
	float key;
	
	scanf("%s", name);
	scanf("%d", &age);
	scanf("%c", &club);
	scanf("%f", &key);
	
	printf("%s\n", name);
	printf("%d\n", age);
	printf("%c\n", club);
	printf("%f", key);
	
	return 0;
}
