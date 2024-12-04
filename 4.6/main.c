#include<stdio.h>
int s(int a){
    if(a==1)
    return 1;
    else
    return a+s(a-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",s(n));
    return 0;
}
