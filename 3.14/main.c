#include <stdio.h>
#include <math.h>
int prime(int m);

int main()
{
    int M=0,N=0,i,k;
    scanf("%d %d\n",&M,&N);
    for (i = M + 1; k < N; i++) {
        if (prime(i) && prime(i + 2)) {
            printf("%d,%d\n", i, i + 2);
            k++;
        }
    }
 return 0;
}
int prime(int m){
    int i,n,flag=1;
    if(m==1)
    return 0;
    n=sqrt(m);
    for(i=2;i<=n;i++){
        if(m%i==0){
            flag=0;
            break;
        }
}
return flag;
}
