/* malloc */
#include<stdio.h>
#include<malloc.h>
void f(int * q)
{
//	*p = 200;  error 局部参数跨界
	*q = 200;
//	free(q); 
}

int main(void)
{
	int * p = (int *)malloc(sizeof(int)); // p指针 指向 动态分配的内存空间的首地址 然后根据int 向后顺延4个字节 ，即p指向这个动态分配的区域 
//	int * s; // 定义指针变量 必须赋予地址  否则程序会崩溃 
	int * s;//这样改也行 但是影响执行速度 效率低 
	s = &*p; //同上 
	*p = 10;
	
	printf("%d\n", *p);
	
	f(s);
//	f(p);
	printf("%d\n", *p);
	
	return 0;
} 