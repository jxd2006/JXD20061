#include <stdio.h>
#define N 20
int main()
{
    int score,i=1,sum=0;
    while(i<=N){
        printf("������%d���ɼ���\n",i);
        scanf("%d",&score);
        if(score>=0&&score<=100){
            sum+=score;
            i++;
        }
        else
            printf("�ɼ�����ȷ�����������룡\n");
    }
    printf("ƽ���ɼ���%.2f\n",(float)sum/N);
    return 0;
}
