#include<stdio.h>
int main()
{
    int i=1,sum=0;
    loop:if(i<=100)
    {
        sum+=i;
        i++;
        goto loop;
    }
    printf("1~100的自然数之和：%d\n",sum);
    return 0;
}
