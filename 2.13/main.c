#include<stdio.h>
int main()
{
    int N=0;
    scanf("%d",&N);
    while(N>1){
        if((N%2)==0){
            N/=2;
            printf("%d ",N);
        }
        else{
            N=3*N+1;
            printf("%d ",N);
        }
    }
    return 0;
}
