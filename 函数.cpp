/* 函数 */
#include<stdio.h>
int f(void)
{
	return 10;
}
/*
void g(void)
{
	return 10;
}
*/

int main(void)
{
	int j = 88;
	
	j = f();
	printf("j = %d\n", j);
	
//	i = g(); g() void 无返回值 错误	
	
	
	return 0;
} 