/* malloc_һά��̬���鹹�� */
#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int len;
	int i;
	
	printf("������Ҫ�����һά����Ԫ�صĸ�����");
	scanf("%d", &len);
	
	int * pArr = (int *)malloc(4 * len);// �ȼ��� int pArr[len];
	printf("�����������Ԫ�أ��ո����\n");
	
	for (i=0; i<len; ++i)
		scanf("%d", &pArr[i]);
	
	for (i=0; i<len; ++i)
		printf("���������Ϊ��%d\n", pArr[i]);	 
		
	return 0; 
} 