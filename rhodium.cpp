#include<stdio.h>

int main(void)
{
	float weight;
	float vaule;
	
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");
	scanf("%f", &weight);
	vaule = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n", vaule);// %.2f. ÓÃ·¨ 
	printf("you are easily worth that! Lf rhodium prices drop,\n");
	printf("eat more to maintain your vaule.\n");
	
	return 0;
}