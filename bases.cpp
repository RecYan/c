#include<stdio.h>

int main(void)
{
	int x = 100;
	
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);	
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);// 推荐 
//	printf("dec = %d; octal = %#0; hex = %#x\n", x, x, x);// 八进制实际书写与编程区别 
	return 0;
} 