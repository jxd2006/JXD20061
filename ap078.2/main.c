#include <stdio.h>
#define N 20
int main()
{
    int score,i=1,sum=0;
    while(i<=N){
        printf("请输入%d个成绩：\n",i);
        scanf("%d",&score);
        if(score>=0&&score<=100){
            sum+=score;
            i++;
        }
        else
            printf("成绩不正确，请重新输入！\n");
    }
    printf("平均成绩：%.2f\n",(float)sum/N);
    return 0;
}
