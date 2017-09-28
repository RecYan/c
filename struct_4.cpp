/* 结构体_函数实现-结构体指针变量 */
#include<stdio.h>
#include<string.h> // 字符串使用声明 
#include<malloc.h>

void InputStudent(struct Student * pst);
// void OutputStudent(struct Student stu); // 函数执行速度慢 浪费内存 不推荐 
void OutputStudent(struct Student * pstu); // 推荐 

struct Student
{
	char name[100];
	int age;
	float score;
	char sex;
};  

int main(void)
{
//	struct Student st; //  (struct Student)看成一种认为定义的数据类型 
	struct Student * st;
	st = (struct Student *)malloc(sizeof(struct Student *)); // malloc 只返回第一个字节地址 
	printf("结构体指针占用字节数为：%d\n", sizeof(st)); //  st 为指针变量占4个字节 

	InputStudent(st);
//	InputStudent(&st);
//	OutputStudent(st); // 不修改函数成员的值 指针 或者 普通变量 传递都是可以的 但传递变量 执行速度慢 
	OutputStudent(st);	// 推荐 提高函数执行效率 
//	OutputStudent(&st);

	return 0;
}
 
void InputStudent(struct Student * pst) // 需要跨函数修改函数成员的值 必须使用指针来实现 
{
	strcpy(pst->name, "张三"); // 字符串赋值规则 
	pst->age = 23;
	pst->score = 98;
	pst->sex = 'M';
//	(*pst).sex = 'M';
 		
} 

/*
void OutputStudent(struct Student stu)
{
	printf("name: %s, age: %d, score: %f, sex: %c\n", stu.name, stu.age, stu.score, stu.sex);
}
// %s 字符串输出运算符 
*/

void OutputStudent(struct Student * pstu)
{
	printf("name: %s, age: %d, score: %f, sex: %c\n", pstu->name, pstu->age, pstu->score, pstu->sex); // %s 字符串输出运算符 
}