//编写程序，统计并输出某给定字符在给定字符串中出现的次数。
//程序运行时，先在一行输入一个以回车结束的字符串（少于80个字符），
//再在第二行输入一个字符；程序输出该字符在字符串中出现的次数。
#include <stdio.h>
int main()
{
    char arr[80],s;
    int i=0,count=0;
    gets(arr);
    s=getchar();
    while(arr[i]!='\0'){
        if(arr[i++]==s){
            count++;
        }
    }
    printf("\ncount is:%d\n",count);
    return 0;
}
