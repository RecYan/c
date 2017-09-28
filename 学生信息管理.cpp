/*********************************************************************************************************************************************************************************** 
*                                                                                                                                                                                   * 
*                                                                                                                                                                                   * 
*                                                                                                                                                                                   *
*                                                                                                                                                                                   *
*                                                                                                                                                                                   *
* 学生信息管理_初级                                                                                                                                                                 *
************************************************************************************************************************************************************************************/
#include<stdio.h>
#include<malloc.h>

struct Student
{
	char name[100];
	float score;
	int age;
}; 
//学生信息输入 
void InputStudent(struct Student * Pin, int len)
{
	int i;
	for (i=0; i<len; ++i)
	{
		printf("请输入第%d个学生的信息:\n", i+1);
		printf("age = ");
		scanf("%d", &Pin[i].age);

		printf("name = ");
		scanf("%s", Pin[i].name);  //name是数组名，本身就已经是数组首元素的地址

		printf("score = ");
		scanf("%f", &Pin[i].score);
	}	
}

// 冒泡排序 
void SortScore(struct Student * Psort, int len)
{
	int i, j;
	struct Student st;
	
	for (i=0; i<len-1; ++i)
	{
		for (j=0; j<len-1-i; ++j)
		{
			if (Psort[j].score > Psort[j+1].score) //>升序 <降序
			{
				st = Psort[j];
				Psort[j] = Psort[j+1]; // 只互换位置 不互换成绩 所以不要 pstu->score  
				Psort[j+1] = st;
			}
		}
	}

}

// 学生信息输出
void OutputStudent(struct Student * Pout, int len) 
{
	int i;
	
	printf("\n\n学生的信息是:\n");
	for (i=0; i<len; ++i)
	{
		printf("第%d个学生的信息是:\n", i+1);
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
		
	printf("请输入学生的个数:\n");
	printf("len = ");
	scanf("%d", &len);
	
	pArr = (struct Student *)malloc(len * sizeof(struct Student)); // 定义一个一维动态数组 
	
	InputStudent(pArr, len);
	SortScore(pArr, len);
	OutputStudent(pArr, len);
	
	free(pArr);
		
	return 0;
}

