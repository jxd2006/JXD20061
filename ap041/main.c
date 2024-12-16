//编写程序，根据用户输入的两位数，反向显示出该数中的数字。
//例如，用户输入48，那么程序输出84。
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("输入一个两位数：");
    scanf("%d",&a);
    int b=a/10;
    int c=a-10*b;
    b=b+c;
    c=b-c;
    b=b-c;
    printf("%d%d\n",b,c);
    return 0;
}
