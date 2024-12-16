//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include <stdio.h>
int main()
{
    int i,j,k=0,N=0;
    scanf("%d",&N);
    int a[N][N];
    for(i=0;i<N;i+=2){
        for(j=0;j<N;j++){
            a[i][j]=++k;
        }
        k+=N;
    }
    k=N;
    for(i=1;i<N;i+=2){
        for(j=N-1;j>=0;j--){
            a[i][j]=++k;
        }
        k+=N;
    }
    for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        printf("%03d",a[i][j]);
        if(j<N-1){
            printf(" ");
        }
    }
    printf("\n");
}
    return 0;
}

