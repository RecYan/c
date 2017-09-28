/* 分数求和 */
#include<stdio.h>

int main(void)
{
	int i;
	float sum = 0;
	
	for (i=1; i<=100; ++i)
	{
		sum = sum + 1.0/i;// 强制类型转换 
//		sum = sum + (float)(1/i);  //错误 
//		sum = sum + 1 / (float)(i);
	}
	
	printf("sum = %f\n", sum);
	
	return 0;
} 
 