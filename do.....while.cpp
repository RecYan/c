/* 人机交互 do....while */ 
#include<stdio.h>
#include<math.h>

int main(void)
{
	double a, b, c;
	double delta;
	double x1, x2;
	char ch; 
	
	do
	{
		printf("请输入一元二次方程的三个系数：\n");
		
		printf("a = ");
		scanf("%lf", &a);
		
		printf("b = ");
		scanf("%lf", &b);
		
		printf("c = ");
		scanf("%lf", &c);
		
		delta = b*b - 4*a*c;
		
		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2*a);
			x1 = (-b - sqrt(delta)) / (2*a); 
			printf("有两个解: x1 = %lf, x2 = %lf\n", x1, x2);
		}
		if (0 == delta)
		{
			x1 = x2 = (-b) / (2*a);
			printf("有唯一解：x1 = x2 = %lf\n", x1, x2);
		}
		if (delta < 0)
		{
			printf("无解!\n");
		}
		printf("是否继续(Y|N)? ");
		scanf(" %c", ch);// %c 前面必须留有空格	
	}while ('y'==ch || 'Y'==ch);//这里分号不能丢 

	return 0;
}