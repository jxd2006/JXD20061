//读入语句中的单词个数
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int word=0,lastchar=1;
    printf("请输入一行字符:\n");
    while((c=getchar())!='\n'){
        if(c==' ')
            lastchar=1;
        else{
            if(lastchar){
                word++;
                lastchar=0;
            }
        }
    }
    printf("该行字符中共有%d个单词.\n",word);
    return 0;
}
