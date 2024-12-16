#include <stdio.h>
#define N 40

int main()
{
    int i;
    float scores[N];
    float mins,maxs;
    for(i=1;i<N;i++){
        scanf("%f",&scores[i]);
    }
        maxs=scores[0];
        mins=scores[0];
        for(i=1;i<N;i++){
        if(scores[i]>maxs){
            maxs=scores[i];
        }
        else if(scores[i]<mins){
            mins=scores[i];
        }
    }
    printf("最高成绩为：%f,最低成绩为：%f\n",maxs,mins);
    return 0;
}
//char ch[5];
//int i;
//for(i=0;i<5;i++)
//scanf("%c",&ch[i]);
