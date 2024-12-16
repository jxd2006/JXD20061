//斐波那契数列2.0
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1,m=1,count,sum=0;
    printf("请输入斐波那契数列的个数：");
    scanf("%d",&count);
    printf("%d %d ",n,m);
    for(int i=0;i<count-2;i++)
    {
        sum=n+m;
        printf("%d ",sum);
        n=m;
        m=sum;
    }
    return 0;
}
