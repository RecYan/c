/* 超出系统上 int 的最大值*/
#include<stdio.h>

int main(void)
{
	int i = 21435673;
	unsigned  int j = 4294967295;
	
	printf("%d; %d; %d\n", i, i + i, i + 2);
	printf("%u; %u; %u\n", j, j + 1, j + 2);	
	
	return 0;
}