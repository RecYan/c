/* malloc_一维动态数组构造 */
#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int len;
	int i;
	
	printf("请输入要构造的一维数组元素的个数：");
	scanf("%d", &len);
	
	int * pArr = (int *)malloc(4 * len);// 等价于 int pArr[len];
	printf("请输入数组的元素，空格隔开\n");
	
	for (i=0; i<len; ++i)
		scanf("%d", &pArr[i]);
	
	for (i=0; i<len; ++i)
		printf("构造的数组为：%d\n", pArr[i]);	 
		
	return 0; 
} 