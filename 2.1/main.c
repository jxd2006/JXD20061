#include<stdio.h>
int main()
{
    int A=0,B=0;
    int i,j,sum=0;
    int c=-1;
    scanf("%d",&A);
    for(i=1;i<A;i++){
        if(A%i==0)
        B+=i;
    }
    for(j=1;j<B;j++){
        if(B%j==0)
        sum+=j;
    }
    if(sum==A)
    printf("%d",B);
    else
    printf("%d",c);
    return 0;
}
