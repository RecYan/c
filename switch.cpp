/* switch */
#include<stdio.h>

int main(void)
{
	int val;
	
	printf("������Ҫ�����¥�㣺");
	scanf("%d", &val);
	
	switch (val)
	{
		case 1:
			printf("һ�㿪��\n");
			break;
//			break; ע�͵� ����������ִ�� 
		case 2:
			printf("���㿪��\n");
			break;
		case 3:
			printf("���㿪��\n");
			break;	
		default:
			printf("��δ�Ǻã�\n");
			break;			
	}	
	
	return 0;
}