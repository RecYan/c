/* malloc */
#include<stdio.h>
#include<malloc.h>
void f(int * q)
{
//	*p = 200;  error �ֲ��������
	*q = 200;
//	free(q); 
}

int main(void)
{
	int * p = (int *)malloc(sizeof(int)); // pָ�� ָ�� ��̬������ڴ�ռ���׵�ַ Ȼ�����int ���˳��4���ֽ� ����pָ�������̬��������� 
//	int * s; // ����ָ����� ���븳���ַ  ����������� 
	int * s;//������Ҳ�� ����Ӱ��ִ���ٶ� Ч�ʵ� 
	s = &*p; //ͬ�� 
	*p = 10;
	
	printf("%d\n", *p);
	
	f(s);
//	f(p);
	printf("%d\n", *p);
	
	return 0;
} 