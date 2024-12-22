//给定（输入）两个均不超过9的正整数a和n，
//要求编写程序求a+aa+aaa++…++aa⋯a（n个a）之和。


#include <stdio.h>
int main()
{
    int a,n;
    int s,i,sum=0;
    scanf("%d%d",&a,&n);
    s=a;
    for(i=1;i<=n;i++){
        sum+=s;
        s=10*s+a;
    }
    printf("sum=%d\n",sum);
    return 0;
}
