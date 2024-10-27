#include<stdio.h>
#define N 10
int main()
{
    int i,num,maxnum;
    printf("请输入第1个整数：");
    scanf("%d",&num);
    maxnum=num;
    for(i=2;i<=N;i++)
    {
        printf("请输入第%d个整数:",i);
        scanf("%d",&num);
        if(num>maxnum){
                maxnum=num;}
        printf("当前最大数：%d\n",maxnum);
    }
    printf("\n最大整数是：%d\n",maxnum);
    return 0;
}
