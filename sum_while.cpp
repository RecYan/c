/* 求和 */
#include<stdio.h>

int main(void)
{
	int i ;
	int sum = 0;
	
/*	for (i=1; i<=5; ++i)
	{
		sum = sum + i;
	}	
*/
	i = 1;
	while (i<=5)
	{
		sum =sum + i;
		++i;	
	}
	
	printf("sum = %d\n", sum); 
	
	return 0;
} 
/*
	for (1; 2; 3)
	{
		4;
	}
----------------------
	1;
	while (2)
	{
		4;
		3; // 4 和 3 顺序不能倒换 
	}	
 这两者可以互换	
*/