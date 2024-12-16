#include <stdio.h>
#include <math.h>
int main()
{
    int i,N=0,X=0;
    scanf("%d",&N);
    int a[N];
    int *p=a;
    for(i=0;i<N;i++){
        scanf("%d",p+i);
    }
    scanf("%d",&X);
    p=a;
    int *closest=p;
    double min_diff=fabs(X-*p);
    for(p=a+1;p<a+N;p++){
        double diff=fabs(X-*p);
        if(diff<min_diff){
            min_diff=diff;
            closest=p;
        }
    }
    printf("%d",*closest);
    return 0;
}
