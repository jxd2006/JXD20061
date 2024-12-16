#include<stdio.h>
#include<math.h>
int main(){
    double N;
    scanf("%lf",&N);
    double x=0;
    int a=0,b=2;
    x=(a+b)/2;
    double sum;
    sum=fx(x);
    while(fabs(sum)>=N){
        printf("hello world");
        if(fx(x)*fx(a)>0){
            a=x;
        }
        else b=x;
        x=(a+b)/2;
        sum=fx(x);
    }
    printf("%.8lf",x);
    return 0;
}
int fx(int x){
    double sum;
    sum=x*x*x*x*x-2*x*x*x*x+x*x-3;
    return sum;
}
