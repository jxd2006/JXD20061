//ð������
#include<stdio.h>
#define N 10
int main()
{
    int data[N+1],i,j,t;
    printf("������%d������:\n",N);
    for(i=1;i<=N;i++)
        scanf("%d",&data[i]);
        for(i=1;i<N;i++){
            for(j=1;j<=N-i;j++)
              if(data[j]>data[j+1]){
                t=data[j];data[j]=data[j+1];data[j+1]=t;
            }
        }
        printf("���������Ľ��Ϊ:\n");
        for(i=1;i<=N;i++)
            printf("%d  ",data[i]);
        printf("\n");
        return 0;
}
