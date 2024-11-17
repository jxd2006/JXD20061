#include <stdio.h>
#include <math.h>

int main()
{
    int N=0,i,j,k,d;
    char c,s;
    c='=',s='+';
    scanf("%d",&N);
    for(i=2;i<N/2;i++){
        for(j=2;j<sqrt(i);j++){
            if(i%j==0)
                break;
        }
        if(j>sqrt(i)){
            d=N-i;
        for(k=2;k<sqrt(d);k++){
            if(d%k==0)
                break;
        }
        if(k>sqrt(d))
            printf("%d%c%d%c%d\n",N,c,i,s,d);
        }
    }
    return 0;
}
