#include<stdio.h>
int main(void)
{
	int a, b;
	
	a = 5;
	b = 2;
	b = a;
	a = b;
	
	printf("b= %d a = %d\n", b, a);
	printf("b= %d a = %d\n", b + a, a);// b + a 变量标识 
	
	return 0;
} 