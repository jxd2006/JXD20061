#include<stdio.h>
int main()
{
    int n,k;
    long sum=0,sn;
    for(n=1;n<=100;n++){
        sn=0;
        for(k=1;k<=n;k++)
            sn+=k;
        sum+=sn;
    }
    printf("×ÜºÍ=%ld\n",sum);
    return 0;
}
