//����100���ڵ�����֮��
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,i;
    sum=0;
    for(i=1;i<=100;i++)
    {
        sum+=i;
    }
    printf("1+2+...+100=%d\n",sum);
    return 0;
}
