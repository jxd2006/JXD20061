//输入一个字符串，如果不是空串，则照原样输出；如果是空串，则输出“空串”
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("请输入一个字符串：");
    fgets(str,sizeof(str),stdin);
    if(strcmp(str,"\n")==0||strlen(str)==1)
    {
        printf("空串\n");
    }
    else{
        printf("输入的字符串是:%s",str);
    }
    return 0;
}
