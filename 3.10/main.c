#include <stdio.h>
int A(int n);
int main()
{
    int i,k1=0,k2=0;
    int count=0,number=0;
    scanf("%d %d",&k1,&k2);
    for(i=k1;i<=k2;i++){
        if(A(i)==1)
        count++;
        else if(A(i)==0)
        number++;
    }
    printf("%d %d",count,number);
    return 0;
}
int A(int n){
    int a=0,b=0,j=0,k=0;
    char c[100];
    do{
        c[k]=n%2+'0';
        n/=2;
        k++;
    }
    while(n>0);
    for(j=0;j<k;j++){
    if(c[j]=='1')
    a++;
    else if(c[j]=='0')
    b++;
    }
    if(a>b)
    return 1;
    else
    return 0;
}
