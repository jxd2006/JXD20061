#include<stdio.h>
#define N 10
int main()
{
    int i,num,maxnum;
    printf("�������1��������");
    scanf("%d",&num);
    maxnum=num;
    for(i=2;i<=N;i++)
    {
        printf("�������%d������:",i);
        scanf("%d",&num);
        if(num>maxnum){
                maxnum=num;}
        printf("��ǰ�������%d\n",maxnum);
    }
    printf("\n��������ǣ�%d\n",maxnum);
    return 0;
}