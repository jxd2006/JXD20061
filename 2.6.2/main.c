#include <stdio.h>
#include <math.h>

int main()
{
    long long N=0;
    long long i,b=0;
    int a=0,count=0;
    scanf("%lld",&N);
    for(i=N+1;i>=0;i++){
            b=i;
        while(b>=10){
            b/=10;
            count++;
        }
        count+=1;
        a=(int)pow(10,count);
        if(i*i%a==i){
            printf("%lld",i);
            break;
        }
    }
    return 0;
}
