#include<stdio.h>

int main(void)
{
	int x = 100;
	
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);	
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);// �Ƽ� 
//	printf("dec = %d; octal = %#0; hex = %#x\n", x, x, x);// �˽���ʵ����д�������� 
	return 0;
} 