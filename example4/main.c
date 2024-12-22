//编程求解将一笔零钱（超过一角）换成5分、2分和1分的硬币
//有几种不同的换法（要求每种硬币至少有一枚），
//要求程序输出每一组解。

#include <stdio.h>
int main(){
    int money,count=0;
    int i,j,k;
    printf("请输入一笔钱(单位为分):");
    scanf("%d",&money);
    for(i=1;i<=money/5;i++){
        for(j=1;j<=money/2;j++){
            for(k=1;k<=money-5-2;k++){
                if(5*i+2*j+k==money){
                    count++;
                    printf("方案%d:5分%d枚，2分%d枚，1分%d枚\n",count,i,j,k);
                }
            }
        }
    }
    return 0;
}
