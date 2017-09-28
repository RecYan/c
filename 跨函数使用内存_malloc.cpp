/* 跨函数使用内存_malloc */
#include<stdio.h>
#include<malloc.h>
void f(int ** q)
{
	 *q = (int *)malloc(sizeof(int));
//	q = 5; error q 存放 int * 类型地址  
//	*q = 5; error *q 等价与 p p 存放 int 类型地址 
	**q = 5; // **q 等价于 *p 
}

int main(void)
{
	int * p;
	
	f(&p);
	
	printf("%d\n", *p);
	
	return 0;
}