#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,p,loop=1;
    printf("请输入两个正整数:\n");
    scanf("%d%d",&m,&n);
    while(loop){
        p=m%n;
        if(p==0)loop=0;
        else
            {m=n;n=p;}
    }
    printf("最大公约数：%d\n",n);
    return 0;
}
