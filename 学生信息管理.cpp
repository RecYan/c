/*********************************************************************************************************************************************************************************** 
*                                                                                                                                                                                   * 
*                                                                                                                                                                                   * 
*                                                                                                                                                                                   *
*                                                                                                                                                                                   *
*                                                                                                                                                                                   *
* ѧ����Ϣ����_����                                                                                                                                                                 *
************************************************************************************************************************************************************************************/
#include<stdio.h>
#include<malloc.h>

struct Student
{
	char name[100];
	float score;
	int age;
}; 
//ѧ����Ϣ���� 
void InputStudent(struct Student * Pin, int len)
{
	int i;
	for (i=0; i<len; ++i)
	{
		printf("�������%d��ѧ������Ϣ:\n", i+1);
		printf("age = ");
		scanf("%d", &Pin[i].age);

		printf("name = ");
		scanf("%s", Pin[i].name);  //name����������������Ѿ���������Ԫ�صĵ�ַ

		printf("score = ");
		scanf("%f", &Pin[i].score);
	}	
}

// ð������ 
void SortScore(struct Student * Psort, int len)
{
	int i, j;
	struct Student st;
	
	for (i=0; i<len-1; ++i)
	{
		for (j=0; j<len-1-i; ++j)
		{
			if (Psort[j].score > Psort[j+1].score) //>���� <����
			{
				st = Psort[j];
				Psort[j] = Psort[j+1]; // ֻ����λ�� �������ɼ� ���Բ�Ҫ pstu->score  
				Psort[j+1] = st;
			}
		}
	}

}

// ѧ����Ϣ���
void OutputStudent(struct Student * Pout, int len) 
{
	int i;
	
	printf("\n\nѧ������Ϣ��:\n");
	for (i=0; i<len; ++i)
	{
		printf("��%d��ѧ������Ϣ��:\n", i+1);
		printf("age = %d\n", Pout[i].age);
		printf("name = %s\n", Pout[i].name);  
		printf("score = %f\n", Pout[i].score);
		printf("\n");
	}
}

/*
void InputStudent(struct Student * Pin, int len);
void SortScore(struct Student * Psort, int len);
void OutputStudent(struct Student * Pout, int len)  
*/

int main(void)
{
	int len;
	struct Student * pArr;
		
	printf("������ѧ���ĸ���:\n");
	printf("len = ");
	scanf("%d", &len);
	
	pArr = (struct Student *)malloc(len * sizeof(struct Student)); // ����һ��һά��̬���� 
	
	InputStudent(pArr, len);
	SortScore(pArr, len);
	OutputStudent(pArr, len);
	
	free(pArr);
		
	return 0;
}

