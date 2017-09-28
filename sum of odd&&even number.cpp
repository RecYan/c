/* 奇数、偶数和 */
#include<stdio.h>

int main(void)
{
	int i;
	int sum_1 = 0;
	int sum_2 = 0;
	
	for (i=1; i<101; ++i)
	{
		if (i%2 == 1)
		{
			sum_1 += i;
		}	
		else
		{
			sum_2 += i;
		}
			
	}
	
	printf("奇数和为: %d\n", sum_1);
	printf("偶数和为: %d\n", sum_2);
			
	return 0;
} 