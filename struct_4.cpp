/* �ṹ��_����ʵ��-�ṹ��ָ����� */
#include<stdio.h>
#include<string.h> // �ַ���ʹ������ 
#include<malloc.h>

void InputStudent(struct Student * pst);
// void OutputStudent(struct Student stu); // ����ִ���ٶ��� �˷��ڴ� ���Ƽ� 
void OutputStudent(struct Student * pstu); // �Ƽ� 

struct Student
{
	char name[100];
	int age;
	float score;
	char sex;
};  

int main(void)
{
//	struct Student st; //  (struct Student)����һ����Ϊ������������� 
	struct Student * st;
	st = (struct Student *)malloc(sizeof(struct Student *)); // malloc ֻ���ص�һ���ֽڵ�ַ 
	printf("�ṹ��ָ��ռ���ֽ���Ϊ��%d\n", sizeof(st)); //  st Ϊָ�����ռ4���ֽ� 

	InputStudent(st);
//	InputStudent(&st);
//	OutputStudent(st); // ���޸ĺ�����Ա��ֵ ָ�� ���� ��ͨ���� ���ݶ��ǿ��Ե� �����ݱ��� ִ���ٶ��� 
	OutputStudent(st);	// �Ƽ� ��ߺ���ִ��Ч�� 
//	OutputStudent(&st);

	return 0;
}
 
void InputStudent(struct Student * pst) // ��Ҫ�纯���޸ĺ�����Ա��ֵ ����ʹ��ָ����ʵ�� 
{
	strcpy(pst->name, "����"); // �ַ�����ֵ���� 
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
// %s �ַ����������� 
*/

void OutputStudent(struct Student * pstu)
{
	printf("name: %s, age: %d, score: %f, sex: %c\n", pstu->name, pstu->age, pstu->score, pstu->sex); // %s �ַ����������� 
}