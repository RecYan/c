#include<stdio.h>

void printf1(void);// ��������������׼��ʽ 
void printf2(void);

int main(void)
{
	printf1();
	printf1();
	printf1();
	printf2();	

	return 0;
}
void printf1(void)
{
	printf("For he is a jolly good fellow!\n");
}
void printf2(void)
{
	printf("Which nobody can deny!\n");
}