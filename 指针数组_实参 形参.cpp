/* ָ��������� */
#include<stdio.h>
void f(int * pArr, int len)
{
	int i;
	
	for (i=0; i<len; ++i)
//		printf("%d ", *(pArr+i));
		printf("%d ", pArr[i]);
	printf("\n");
//  pArr[i]; 			
}

int main(void)
{
	int a[4] = {1, 2, 3, 4};
	
	f(a, 4); 
//  a[i]; ͨ��ָ��ӳ��  ��a[i]�Ĳ��� �͵ȼ��ڶ�f������pArr[i]�Ĳ��� 		
	
	return 0;
}