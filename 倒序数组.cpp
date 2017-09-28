/* Êý×éµ¹ÖÃ */
#include<stdio.h>

int main(void)
{
	int a[4] = {1, 2, 3, 4};
	int i, j;
	int t;
	
	i = 0;
	j = 3;
	
	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--; 
 	}
	for (i=0; i<4; ++i)
	{	
		printf("%d ", a[i]);
	}
		
	return 0;
}
 