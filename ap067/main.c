#include<stdio.h>
int main()
{
    int i;
    int sum=0,day=0;
    double aver=0;
    float cost=0.8;
    for(i=2;i<=100;i*=2){
    sum+=i;
    day++;
    }
    aver=(sum*cost)/day;
    printf("%f",aver);
    return 0;
    }
