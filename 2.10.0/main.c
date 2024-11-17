#include <stdio.h>
#include <math.h>

int main()
{
    int i,N=0;
    scanf("%d\n",&N);
    for(i=0;i<N;i++){
            int a=0,b=0,sum=0,j=0,total=0,c=0,count=0,k=0;
    scanf("%d %d",&a,&b);
    int d=a;
    while(d>=10){
        d/=10;
        count++;
    }
    count+=1;
    if((a%10)!=0){
    while(a>=10){
        j=a%10;
        a/=10;
        sum+=j;
        sum*=10;
    }
    sum+=a;
    total=sum*b;
    printf("%d\n",total);
    }
    else{
    while(a%10==0){
        c=a/10;
        a=c;
    }
    c=a;
    int e=a;
        while(e>=10){
        e/=10;
        k++;
    }
    k+=1;
        while(c>=10){
        j=c%10;
        c/=10;
        sum+=j;
        sum*=10;
    }
    sum+=c;
    long int l=pow(10,count-k);
    total=l*sum*b;
    printf("%d\n",total);
    }
    }
    return 0;
}
