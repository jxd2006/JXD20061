#include<stdio.h>
int hanoi(int n){
    if(n==1)
    return 1;
    return (2*hanoi(n-1)+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",hanoi(n));
    return 0;
}
