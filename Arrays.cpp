/* ���� */
#include<stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};// a[0].....a[4]��� 
	int i;
	
	for (i=0; i<5; ++i)
		printf("%d\n", a[i]);
		printf("%d\n", a[5]);// δ��ʼ�� �������ֵ 
	
	return 0;
} 