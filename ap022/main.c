//编写程序，输入一个数字序列，输出相邻两个数之间的差值。
#include<stdio.h>

int main()
{
    int n,i;
    printf("请输入数字的个数：");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("数字个数必须大于0。\n");
        return 1;
    }
    int numbers[n];
    printf("请输入%d个数字;\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d和%d之间的差值是：%d\n",numbers[i],numbers[i+1],numbers[i+1]-numbers[i]);
    }
    return 0;
}
