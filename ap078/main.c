#include <stdio.h>
#define N 20

int main()
{
    int score,i,sum=0,loop;
    for(i=1;i<=N;i++){
        loop=1;
        printf("�������%d���ɼ���\n",i);
        while(loop){
            scanf("%d",&score);
            if(score>=0&&score<=100)
                loop=0;
            else
                printf("�ɼ�����ȷ�����������룡\n");
        }
        sum+=score;
    }
    printf("ƽ���ɼ���%.2f\n",(float)sum/N);
    return 0;
}
