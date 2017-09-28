/* º¯Êý */
#include<stdio.h>
void max(int i, int j)
{
	if (i>j)
		printf("%d\n", i);
	else
		printf("%d\n", j);	
}

int main(void)
{
	int a, b, c, d;
	
	a = 1, b = 12, c =-11, d =24;
	
	max(a, b);
	max(c, d);
	
	return 0;
} 