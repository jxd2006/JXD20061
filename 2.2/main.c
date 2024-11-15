#include<stdio.h>
int main()
{
    int sum=0,N=0,i=0;
    scanf("%d",&N);
    while(N>=10){
        i=N%10;
        N=N/10;
        sum+=i;
        sum*=10;
    }
    sum+=N;
    printf("%d\n",sum);
    return 0;
}
