/* �˻����� do....while */ 
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
		printf("������һԪ���η��̵�����ϵ����\n");
		
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
			printf("��������: x1 = %lf, x2 = %lf\n", x1, x2);
		}
		if (0 == delta)
		{
			x1 = x2 = (-b) / (2*a);
			printf("��Ψһ�⣺x1 = x2 = %lf\n", x1, x2);
		}
		if (delta < 0)
		{
			printf("�޽�!\n");
		}
		printf("�Ƿ����(Y|N)? ");
		scanf(" %c", ch);// %c ǰ��������пո�	
	}while ('y'==ch || 'Y'==ch);//����ֺŲ��ܶ� 

	return 0;
}