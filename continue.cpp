/* continue */ 
#include<stdio.h>

int main(void)
{
	int i;
	char ch;
	int j;
	
	scanf("%d", &i);
	printf("i = %d\n", i);
	
	while ((ch=getchar()) != '\n')// continue ��ת�ж� 
 		continue; // ����ѭ�������䣬 ת���ж��Ƿ���Ҫִ���´�ѭ�� 

	scanf("%d", &j);
	printf("j = %d\n", j);	

	return 0;
}
