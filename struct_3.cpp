/* �ṹ���Ա����ȡ����ʽ */
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
	pst->age = 26; // �ڲ��Զ�ת��Ϊ(*pst).age	���ȼ��� st.age 
	
	printf("%d, %f, %c\n", st.age, st.score, st.sex); 
		
	return 0;
}