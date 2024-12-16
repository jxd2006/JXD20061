#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(1){
        if(scanf("%d%d%d",&a,&b,&c)!=3)break;
        d++;
        printf("%d\n",d);
    }
    return 0;
}
