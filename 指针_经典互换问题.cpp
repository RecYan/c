/* ����������_ָ��ʵ�� */
#include<stdio.h>
//void Interchange_1(int c, int d);
//void Interchange_2(int * p, int * q);
void Interchange_3(int * p, int * q);

int main(void)
{
	int a = 3;
	int b = 5;
	
	printf("����ǰ��a = %d, b = %d\n", a, b);
	
//	Interchange_2(&a, &b);
//	printf("������a = %d, b = %d\n", a, b);
	
	Interchange_3(&a, &b);	
	printf("������a = %d, b = %d\n", a, b);	
	
	return 0;
}

/*
// �����ֲ���������Ӱ�� 
void Interchange_1(c, d)
{
	int t;
	
	t = a;
	a = b;
	b = t;
	
	return;
}
*/

/*
//  ����ͬ��  ������p q ��ַ 
void Interchange_2(int * p, int * q)
{
	int * t;                       //  int * p; Ӧ���������: p�Ǳ�����, p���������������� int *����
                                   		//  ��νint * ���� ʵ�ʾ��Ǵ��int������ַ������
	t = p;
	p = q;
	q = t;
	
	printf("a = %d, b = %d",*p ,*q);     // �������ݽ��� ��*p���൱��a�� ����ô��ƺ����ǲ��õ� 
//	printf("%d %d",p ,q);      //  ������δ int *  δ����ָ����ͨ���� ϵͳ�������ֵ 
								
	return;
}
*/

void Interchange_3(int * p, int * q) // ( int * p; p =&a; )ָ�����˶��� �� *p �� a ����ȫ��ͬ�� 
{
	int t;
	
	t = *p;
	*p = *q;
	*q = t;	
	
	return;
} 