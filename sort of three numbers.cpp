/* ���������� */ 
#include<stdio.h>

int main(void)
{
	int a, b, c;
	int t;
	
	printf("���������������м��Կո������\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		t = a;
		a = b; 
		b = t;
	}
	if (a < c)
	{
		t = a;
		a = c; 
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c; 
		c = t;
	}
	printf("�����������Ӵ�С��˳��Ϊ�� %d %d %d", a, b, c);

	return 0 ;
}