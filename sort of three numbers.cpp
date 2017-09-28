/* 三个数排序 */ 
#include<stdio.h>

int main(void)
{
	int a, b, c;
	int t;
	
	printf("请输入三个数，中间以空格隔开！\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		t = a;
		a = b; 
		b = t;
	}
	if (a < c)
	{
		t = a;
		a = c; 
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c; 
		c = t;
	}
	printf("输入三个数从大到小的顺序为： %d %d %d", a, b, c);

	return 0 ;
}