/* ȫ�ֱ����;ֲ����� */
#include<stdio.h>
/*
void g(int j)
{
	pirntf("%d", i);
}
*/

int i = 10;// ȫ�ֱ��� ֻ�����´��� 

void f(int i)
{
	printf("i = %d\n", i); // �ֲ���ȫ��������ͻʱ �ֲ�����ȫ�� 
}

void g(int j)
{
	printf("i = %d\n", i);
}

int main(void)
{
	printf("ԭʼ��i = %d\n", i);
	f(88);
	g(88);
	return 0;
}
 