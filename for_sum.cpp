/* ÇóºÍ */
#include<stdio.h>

int main(void)
{
	int i ;
	int sum = 0;
	
	for (i=1; i<=5; i++)
	{
		sum = sum + i;
	}	
	
	printf("sum = %d\n", sum); 
	
	return 0;
} 
/*

	forÖ´ÐÐ²½Öè£¬ i = 1£¬ÅÐ¶Ï i <= 5£¬Ö´ÐÐ sumÓï¾ä£¬
		 i++£¬ÅÐ¶Ï i <= 5, Ñ­»·sumÓï¾ä 

*/