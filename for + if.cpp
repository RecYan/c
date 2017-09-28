/* for if Ç¶Ì× */
#include<stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    for (i=3; i<10; i++)
    {
        if (i%3 == 0)
            sum = sum + i;
        printf("sum = %d\n", sum);
    }
//	printf("sum = %d\n", sum);

    return 0;
}