/* 指针_返回多个值 */
#include<stdio.h>
int swap(int * p , int * q);

int main(void)
{
	int a = 3;
	int b = 5;
	
	swap(&a, &b);
	
	printf("a = %d, b = %d", a, b);
	
	return 0;
}

int swap(int * p , int * q)
{
	*p = 5;
	*q = 3;
} 