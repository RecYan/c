/* if实例 分数等级查询 */
#include<stdio.h> 

int main(void)
{
	int score; // float 更合适 
//	float score;

	printf("Please enter your score!\n");
	scanf("%d", &score);
	if (score < 0)
		printf("wrong, try again!\n");
	else if (score >= 0 && score < 60 )
		printf("disqualified!\n");
	else if (score >= 60 && score < 90)		
		printf("qualified!\n");
	else if (score >= 90 && score < 100)
		printf("perfect!\n");	
	else
		printf("wrong, try again!\n");
	
	return 0;
}
/*
	if ........
	else if.....
	else if.....
	.............
	else

*/