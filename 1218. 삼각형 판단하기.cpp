#include <stdio.h>

int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	if(c >= a+b)
		printf("�ﰢ���ƴ�");
	else if(a==b && b==c && c==a)
		printf("���ﰢ��");
	else if(a==b || b==c || c==a)
		printf("�̵�ﰢ��");
	else if((a*a + b*b) == c*c)
		printf("�����ﰢ��");
	else
		printf("�ﰢ��"); 
}
