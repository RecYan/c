/* 结构体_1 */
#include<stdio.h>

struct Student 
{
	int age;
	float score;
	char sex;
}; // 不能省略 ; 和函数声明类似 

int main(void)
{
	struct Student st = { 23, 90.2, 'M' };
	
	return 0;
}