/* ��ƺ����������� */
#include<stdio.h>
bool Isprime(int j);
void Traverseval(int n);

int main(void)
{
	int val;
	char ch;
	do
	{
		printf("��������Ҫ�жϵ�����");
		scanf("%d", &val);
		
		Traverseval(val);
		
		printf("�Ƿ���Ҫ�����ж�[Y|N]?\n");
		scanf(" %c", ch);				
	}while ('Y'==ch || 'y'==ch);
	
	return 0;
}

//�ж�һ�����Ƿ������� 
bool Isprime(int j)
{
	int i;
	
	for (i=2; i<j; ++i)
	{
		if (j%i == 0)
			break;
	}
	
	if (i == j)
		return true;
	else
		return false;	
}

//��1��N������������ʾ���� 
void Traverseval(int n)
{
	int k;
	
	for (k=2; k<=n; ++k)
	{
		if ( Isprime(k) )
			printf("%d\n", k);
	}
}