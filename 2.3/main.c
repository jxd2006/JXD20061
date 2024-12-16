#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int N=0;
    int a=0,b=0;
    int i=0,j=0,k,count=0;
    scanf("%ld",&N);
    while(N>=10){
        N=N/10;
        count++;
    }
    count+=1;
    int* l;
    l=(int*)malloc(count*sizeof(int));
    int M=N;
    for(k=0;k<=count;k+=2){
        l[k]=M%10;
        M=M/10;
    }
    for(k=0;k<=count;k+=2){
        i=l[count-k];
    a+=i;
    a*=10;
    }
    for(k=0;k<=count;k+=2){
                i=l[count-k];
                b+=j;
                b*=10;
    }
    printf("%d %d",b,a);
    return 0;
}
