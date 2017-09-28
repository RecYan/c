/* switch */
#include<stdio.h>

int main(void)
{
	int val;
	
	printf("请输入要进入的楼层：");
	scanf("%d", &val);
	
	switch (val)
	{
		case 1:
			printf("一层开！\n");
			break;
//			break; 注释掉 则依次向下执行 
		case 2:
			printf("二层开！\n");
			break;
		case 3:
			printf("三层开！\n");
			break;	
		default:
			printf("尚未盖好！\n");
			break;			
	}	
	
	return 0;
}
