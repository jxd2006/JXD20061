#include<stdio.h>
int gcd(int m,int n){
    if(m%n==0)
    return n;
    else{
        return gcd(n,m%n);
    }
}
int main()
{
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
}

