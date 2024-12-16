#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d;
    printf("请输入一个浮点数：");
    scanf("%lf",&d);
    if((int)d==d)
        printf("d等于一个整数！");
        else
        printf("d不等于一个整数！");
    return 0;
}
