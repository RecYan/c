/* 全局变量和局部变量 */
#include<stdio.h>
/*
void g(int j)
{
	pirntf("%d", i);
}
*/

int i = 10;// 全局变量 只能向下传递 

void f(int i)
{
	printf("i = %d\n", i); // 局部和全局命名冲突时 局部屏蔽全局 
}

void g(int j)
{
	printf("i = %d\n", i);
}

int main(void)
{
	printf("原始的i = %d\n", i);
	f(88);
	g(88);
	return 0;
}
 