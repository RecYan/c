/* continue */ 
#include<stdio.h>

int main(void)
{
	int i;
	char ch;
	int j;
	
	scanf("%d", &i);
	printf("i = %d\n", i);
	
	while ((ch=getchar()) != '\n')// continue 跳转判断 
 		continue; // 跳过循环后的语句， 转而判断是否需要执行下次循环 

	scanf("%d", &j);
	printf("j = %d\n", j);	

	return 0;
}
