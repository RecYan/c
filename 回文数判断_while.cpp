/* 回文数判断 */
#include<stdio.h>

int main(void)
{
	int val;// 存放带判断的数
	int m;
	int sum = 0;
	
	printf("请输入需要判断的数字：");
	scanf("%d", &val);
	
	m = val;
	while (m)
	{
		sum = sum * 10 + m%10;
		m = m/10;
	} 
	if (sum ==val)
		printf(" %d 是回文数\n", val);
	else
		printf(" %d 不是回文数\n", val);
		
	return 0;
} 