//输入天数，将其转换为周数和天数。例如：输入17，转换为2周3天，并输出。
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    printf("请输入天数：");
    scanf("%d",&t);
    int a=t/7;
    int b=t%7;
    printf("%d周%d天\n",a,b);
    return 0;
}
