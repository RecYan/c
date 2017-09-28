/* 数组输出_参数传递 */
#include<stdio.h>
void f(int * pArr, int len)
{
	pArr[3] = 123;
//	*(pArr+3) = 123;
}

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	
	printf("调用前：%d\n", a[3]);
	
	f(a, 5);
	printf("调用后：%d\n", a[3]);
//	printf("%d\n", *(a+3));
	
	
	return 0;
}