#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N=0;
    int a=0;
    scanf("%d",&N);
    for(i=N+1;i>=N;i++){
            a=i*i-i;
            if(a%10==0){
                printf("%d",i);
                break;
            }
    }
    return 0;
}
