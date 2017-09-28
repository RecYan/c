#include<stdio.h>

int main(void)
{
	int ten = 10;
	int two = 2;
	
	printf("Doing is right: ");
//	printf("%d minus %d is %d\n", ten, 2, ten-two);
	printf("%d minus %d is %d\n", ten, 2, ten-two);
	printf("Doing is wrong: ");
	printf("%d minus %d is %d\n",ten);/* 缺省项自动补齐垃圾数字 提醒出错 格式说明符的数目一定要等于要显示项目的个数 
	
	return 0;
}