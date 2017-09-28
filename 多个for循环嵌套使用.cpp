/* 多个for循环嵌套使用 */ 
#include<stdio.h>

int main(void)
{
	int i, j;
	
	for (i=0; i<4; ++i)
	{
		for (j=2; j<4; ++j)
		{
				printf("haha\n");
		}
		printf("heihei\n");
	}
	
	return 0;
}
