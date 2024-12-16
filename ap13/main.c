#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int N=0,k=0;
    while(scanf("%d",&N)==1){
            k=0;
            a=N;
        while(N>0){
            k=k*10+N%10;
            N=N/10;
        }
    if(k==a){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
    return 0;
}

