/* 逗号表达式 */
#include<stdio.h>

int main(void)
{
	int i;
	
	i = (2, 3, 4, 5);
	
	printf("i = %d\n", i);	
	
	return 0;
} 
// 从左向右依次执行 