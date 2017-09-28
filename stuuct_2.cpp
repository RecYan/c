/* ½á¹¹Ìå_2 */
#include<stdio.h>

struct Student 
{
	int age;
	float score;
	char sex;
}; 

int main(void)
{
	struct Student st = {23, 88, 'F'};
	struct Student st2;
	st2.age = 24;
	st2.score = 90;
	st.sex = 'M';
	
	printf("%d, %f, %c\n", st.age, st.score, st.sex); 
	printf("%d, %f, %c\n", st2.age, st2.score, st2.sex); 
	
	return 0;
}

