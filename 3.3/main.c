#include<stdio.h>
//编写最大公约数GCD函数
/*********Begin*********/
int gcd(int a,int b){
    int r,t;
    if(a<b){
        t=a;a=b;b=t;
    }
    if(b>0){
        while((r=a%b)!=0){
            a=b,b=r;
        }
    }
    return b;
}
/*********End**********/

//编写最小公倍数LCM函数
/*********Begin*********/
long long lcm(long long x,long long y){
    long long c=(x/gcd(x,y))*y;
    return c;
}
/*********End**********/
int main(void)
{
    /*********Begin*********/
    long long i=0,j=0;
    scanf("%ld %ld",&i,&j);
    if(i<0||j<0)
    printf("Input Error\n");
    else
    printf("%lld %lld",gcd(i,j),lcm(i,j));
    /*********End**********/
    return 0;
}
