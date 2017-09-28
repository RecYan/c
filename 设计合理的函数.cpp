/* 设计合理函数求素数 */
#include<stdio.h>
bool Isprime(int j);
void Traverseval(int n);

int main(void)
{
	int val;
	char ch;
	do
	{
		printf("请输入需要判断的数：");
		scanf("%d", &val);
		
		Traverseval(val);
		
		printf("是否需要继续判断[Y|N]?\n");
		scanf(" %c", ch);				
	}while ('Y'==ch || 'y'==ch);
	
	return 0;
}

//判断一个数是否是素数 
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

//将1到N的所有素数显示出来 
void Traverseval(int n)
{
	int k;
	
	for (k=2; k<=n; ++k)
	{
		if ( Isprime(k) )
			printf("%d\n", k);
	}
}