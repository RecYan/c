/* break && return */
#include<stdio.h>
void f(void)
{
	int i;
	
	for (i=0; i<5; ++i)
	{
		printf("thx!\n");
//		break;
		return;
	}
	printf("thank you!\n");
}


int main(void)
{
	f();
	
	return 0;
} 
/*
-----------
thx!
-----------
*/