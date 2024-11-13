#include <stdio.h>
#define N 20

int main()
{
    int score,i,sum=0,loop;
    for(i=1;i<=N;i++){
        loop=1;
        printf("请输入第%d个成绩：\n",i);
        while(loop){
            scanf("%d",&score);
            if(score>=0&&score<=100)
                loop=0;
            else
                printf("成绩不正确，请重新输入！\n");
        }
        sum+=score;
    }
    printf("平均成绩：%.2f\n",(float)sum/N);
    return 0;
}
