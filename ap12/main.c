#include <stdio.h>
//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include <math.h>

int main()
{
    int N,yes;
    int A=0,B=0;
    int a=0,b=0;
   while(scanf("%d %d",&A,&B)==2){
    for(N=1;N<=10000;N++){
        yes=0;
        a=A+N;
        b=B+N;
        if(sqrt(a)-(int)sqrt(a)==0&&sqrt(b)-(int)sqrt(b)==0){
            yes=1;
            break;
        }
    }
    if(yes==1){
        printf("%d\n",N);
    }
    else if(yes==0){
        printf("Not found!\n");
    }
    }
    return 0;
}
