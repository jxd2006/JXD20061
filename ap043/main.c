//4.9拓展
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char number[100];
    printf("输入一个数字:");
    scanf("%s",number);
    int length=0;
    while(number[length]!='\0')
    {
        length++;
    }
    printf("输出数字：");
    for(int i=length-1;i>=0;i--)
    {
        printf("%c",number[i]);
    }
    printf("\n");
    return 0;
}
