//쳲���������2.0
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1,m=1,count,sum=0;
    printf("������쳲��������еĸ�����");
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
