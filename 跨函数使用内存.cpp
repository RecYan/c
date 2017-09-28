/* 跨函数使用内存 */
#include<stdio.h>
void f(int ** q) // q 仍是个指针变量 
{
	int i = 5;
	*q = &i; // *q 等价于 p 而 p 是 int * 类型 只能存放 int类型变量的地址 
	// *q = 5 // error 
}

int main(void)
{
	int * p;
	
	f(&p);  // 变换主函数里的值 只能通过地址传递参数 使用指针实现 
	
	printf("%d\n", *p); // f函数调用结束后 系统释放其占用的内存空间 这样写代码 就造成 int * p; printf("%d", *p); 内存越界了
						// 	静态变量不能跨函数使用 
	return 0;
} 