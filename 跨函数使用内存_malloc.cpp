/* �纯��ʹ���ڴ�_malloc */
#include<stdio.h>
#include<malloc.h>
void f(int ** q)
{
	 *q = (int *)malloc(sizeof(int));
//	q = 5; error q ��� int * ���͵�ַ  
//	*q = 5; error *q �ȼ��� p p ��� int ���͵�ַ 
	**q = 5; // **q �ȼ��� *p 
}

int main(void)
{
	int * p;
	
	f(&p);
	
	printf("%d\n", *p);
	
	return 0;
}