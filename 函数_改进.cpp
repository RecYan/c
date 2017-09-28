/* º¯Êý¸Ä½ø */
#include<stdio.h>
void max1(int i, int j)
{
	if (i>j)
		printf("%d\n", i);
	else
		printf("%d\n", j);	
}
int max2(int i, int j) 
{
	if (i > j)
		return i;
	else 
		return j;	
}

int main(void)
{
	int a, b, c, d;
	
	a = 1, b = 12, c =-11, d =24;
	
	printf("%d\n", max2(a, b));
//	max1(a, b);
//	max1(c, d);
	
	return 0;
} 