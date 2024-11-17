#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int N=0;
    int a=0,sum=0;
    scanf("%ld",&N);
    if(N>9){
        do{
    do{
        a=N%10;
        sum+=a;
        N/=10;
    }while(N>9);
    sum+=N;
    N=sum;
    }while(sum>9);
    printf("%d",sum);
    }
    else
        printf("%d",sum);
    return 0;
}
