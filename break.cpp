/* break */
#include<stdio.h>

int main(void)
{
	int i, j;
	
	for (i=0; i<3; ++i)
	{
		for (j=0; j<4; ++j)
		{
			break;// ��ֹ���������for 
			printf("OK!\n");
		}
		printf("OK!\n");
	} 
	
	return 0;
} 