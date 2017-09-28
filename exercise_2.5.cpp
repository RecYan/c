#include<stdio.h>

int main(void)
{
	printf("Please type a number!\n");
	int toes ;
	scanf("%d", &toes);
	int sun = toes + toes;
	int square = toes * toes;
	
	printf("toes = %d, toes add toes = %d, toes square toes = %d\n", toes, sun, square);
	
	return 0;
} 