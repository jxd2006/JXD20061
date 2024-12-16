#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("请输入年份：");
    scanf("%d",&a);
    if(a%400==0||(a%4==0&&a%100!=0))
    printf("闰年\n");
    else
        printf("平年\n");
    return 0;
}
