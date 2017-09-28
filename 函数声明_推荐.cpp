 /* 函数实现素数判断__函数声明 */
#include<stdio.h>
bool Isprime(int val);// ;绝对不能省略 这是个语句 告诉编译器有这个函数  这种格式是推荐的 

int main(void)
{
	int m;
	char ch;
	 
	do
	{ 
	    printf("请输入需要判断的数：");
		scanf("%d", &m); 
	
		if ( Isprime(m) )
			printf("Yes!\n");
		else
			printf("No!\n");
		
		printf("您想要继续么(Y|N)?\n");
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