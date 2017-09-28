/* 结构体成员变量取出方式 */
#include<stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st = {23, 87, 'M'};
	struct Student * pst = &st;
	
	st.age = 25;
	pst->age = 26; // 内部自动转化为(*pst).age	即等价于 st.age 
	
	printf("%d, %f, %c\n", st.age, st.score, st.sex); 
		
	return 0;
}