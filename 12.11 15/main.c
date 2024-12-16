//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,flag=0,count=0;
    char a[1000];
    char b[100];
    scanf("%[^\n]",a);
    getchar();
    scanf("%[^\n]",b);
    int lena=strlen(a);
    int lenb=strlen(b);
    for(i=0;i<lena;i++){
        if(a[i]==b[0]){
            for(j=0;j<lenb;j++){
                if(a[i+j]==b[j]){
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag){
                printf("%d\n",i);
                count++;
            }
        }
    }
    if(count==0){
        printf("-1");
    }
    return 0;
}


