#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long N=0;
    int a,sum;
    scanf("%ld",&N);
    loop: a=0,sum=0;
    do{
        a=N%10;
        sum+=a;
        N/=10;
    }while(N!=0);
    if(sum<10)
        printf("%d",sum);
    else if(sum>10){
       N=sum;
       goto loop;
    }
    return 0;
}

