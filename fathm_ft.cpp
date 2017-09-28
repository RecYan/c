#include<stdio.h>
int main(void)
{
	int feet, fathoms;

//	fathoms = 2;
//	feet = 6 * fathoms;
	printf("please type a number of fathoms!\n");
	scanf("%d", &fathoms);
	feet = 6 * fathoms;
	printf("The number is %d, and There are %d feet in %d fathoms.\n", fathoms, feet, fathoms);
//	printf("Yes,I said %d feet!\n", 6 * fathoms);
	printf("Yes,I said %d feet!\n", feet);
		
	return 0;
} 
