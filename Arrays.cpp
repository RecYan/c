/* 数组 */
#include<stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};// a[0].....a[4]存放 
	int i;
	
	for (i=0; i<5; ++i)
		printf("%d\n", a[i]);
		printf("%d\n", a[5]);// 未初始化 填充垃圾值 
	
	return 0;
} 