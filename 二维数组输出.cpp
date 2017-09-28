/* 二维数组 */
#include<stdio.h>

int main(void)
{
	int a[2][3] = {
		{1, 2, 3}, 
		{4, 5, 6}
	};           // 二维数组初始化 推荐 
	int i, j;
	
	for (i=0; i<2; ++i)
	{
		for (j=0; j<3; ++j)
		{
			printf("-%d ", a[i][j]);	
		}
		printf("\n");
	}
		
	return 0;
} 