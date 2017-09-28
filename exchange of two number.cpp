/* Á½¸öÊı»¥»» */
#include<stdio.h>

int main(void)
{
	int i = 4;
	int j = 5;
	int t;
	
	t = i;
	i = j;
	j = t;
	
	printf("i = %d, j = %d\n", i, j);
	
	return 0;
}