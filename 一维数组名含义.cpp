/* 数组名 */
#include<stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	
	printf("%#x, %#x\n",a ,&a[0]); 
	
//	a = &a[2]; // error 一维数组名 是一个指针常量 不可改变！ 是该数组的第一个元素的首地址！ 
	
	return 0;
}