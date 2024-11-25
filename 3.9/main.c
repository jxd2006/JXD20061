//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交#
#include <stdio.h>
#include <math.h>
int prime(int n);
int main()
{
    int a,b,j,k,N=0,M=0;
    scanf("%d",&N);
    for(j=0;j<N;j++){
        scanf("%d",&M);
        if(prime(M)==1)
        printf("%d 0\n",M);
        else{
        for(k=M-1;k>1;k--){
            if(prime(k)==1){
            a=k;
            break;
            }
        }
        for(k=M+1;;k++){
            if(prime(k)==1){
            b=k;
            break;
            }
        }
        if(M-a>b-M)
        printf("%d %d\n",b,b-M);
        else
        printf("%d %d\n",a,M-a);
        }
    }
    return 0;
}
int prime (int n){
    int i,flag=1;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
        flag=0;
        break;
        }
    }
    return flag;
}



































