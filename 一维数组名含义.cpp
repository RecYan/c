/* ������ */
#include<stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	
	printf("%#x, %#x\n",a ,&a[0]); 
	
//	a = &a[2]; // error һά������ ��һ��ָ�볣�� ���ɸı䣡 �Ǹ�����ĵ�һ��Ԫ�ص��׵�ַ�� 
	
	return 0;
}