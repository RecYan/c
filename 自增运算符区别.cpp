/* 前自增 后自增 */
#include<stdio.h>

int main(void)
{
	int i = 3;
	int j = 3;
	int k;
	int m;
	
	k = i++;
	m = ++j;
	
	printf("i = %d, j = %d， k = %d, m = %d\n",i , j, k, m);
	
	return 0;
} 