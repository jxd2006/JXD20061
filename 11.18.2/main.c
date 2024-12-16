//将一个不小于2的整数分解质因数。
#include<stdio.h>
int main()
{
    int n,k=2;
    printf("请输入一个大于或等于2的整数：\n");
    scanf("%d",&n);
    printf("质因子分解结果为；%d=",n);
    while(1){
        if(n%k==0){
            n/=k;
            if(n>1)
                printf("%d*",k);
            else{
                printf("%d\n",k);
                break;
            }
        }
        else k++;
    }
    return 0;
}
