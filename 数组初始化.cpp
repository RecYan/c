/* สýื้ */
#include<stdio.h>

int main(void)
{
	int a[5];
	int i;
	
	scanf("%d", &a[0]);
	printf("a[0] = %d\n", a[0]);

	scanf("%d", &a[1]);
	printf("a[0] = %d\n", a[1]);
	
	for (i=0; i<5; ++i)
	{
		printf("%d\n", a[i]);

	}	
		
	return 0;	
} 