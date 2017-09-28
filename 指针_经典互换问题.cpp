/* 互换两个数_指针实现 */
#include<stdio.h>
//void Interchange_1(int c, int d);
//void Interchange_2(int * p, int * q);
void Interchange_3(int * p, int * q);

int main(void)
{
	int a = 3;
	int b = 5;
	
	printf("互换前：a = %d, b = %d\n", a, b);
	
//	Interchange_2(&a, &b);
//	printf("互换后：a = %d, b = %d\n", a, b);
	
	Interchange_3(&a, &b);	
	printf("互换后：a = %d, b = %d\n", a, b);	
	
	return 0;
}

/*
// 两个局部变量互不影响 
void Interchange_1(c, d)
{
	int t;
	
	t = a;
	a = b;
	b = t;
	
	return;
}
*/

/*
//  理由同上  交换了p q 地址 
void Interchange_2(int * p, int * q)
{
	int * t;                       //  int * p; 应该这样理解: p是变量名, p变量的数据类型是 int *类型
                                   		//  所谓int * 类型 实际就是存放int变量地址的类型
	t = p;
	p = q;
	q = t;
	
	printf("a = %d, b = %d",*p ,*q);     // 参数传递进来 ，*p就相当于a， 但这么设计函数是不好的 
//	printf("%d %d",p ,q);      //  类型仍未 int *  未具体指向普通变量 系统输出垃圾值 
								
	return;
}
*/

void Interchange_3(int * p, int * q) // ( int * p; p =&a; )指针有了定义 即 *p 与 a 是完全等同的 
{
	int t;
	
	t = *p;
	*p = *q;
	*q = t;	
	
	return;
} 