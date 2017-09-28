/* 指针数组举例 */
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
//  a[i]; 通过指针映射  对a[i]的操作 就等价于对f函数中pArr[i]的操作 		
	
	return 0;
}