/* sizeof */
#include<stdio.h>

int main(void)
{
	int i = 99;
	double x = 34.43;
	char ch = 'A';
	int * p = &i;
	char * q = &ch;
	double * r = &x;
	
	printf("%d, %d, %d\n", sizeof(p), sizeof(q), sizeof(r));
	
	return 0;
}