 /* ����ʵ�������ж�__�������� */
#include<stdio.h>
bool Isprime(int val);// ;���Բ���ʡ�� ���Ǹ���� ���߱��������������  ���ָ�ʽ���Ƽ��� 

int main(void)
{
	int m;
	char ch;
	 
	do
	{ 
	    printf("��������Ҫ�жϵ�����");
		scanf("%d", &m); 
	
		if ( Isprime(m) )
			printf("Yes!\n");
		else
			printf("No!\n");
		
		printf("����Ҫ����ô(Y|N)?\n");
			scanf(" %c", &ch);
	} while ('Y'==ch || 'y'==ch);
	
	return 0;
} 

bool Isprime(int val)
{
	int i;
	
	for (i=2; i<val; ++i)
	{
		if (val%i == 0)
			break;		
	}
	if (val == i)
		return true;
	else 
		return false;	
}