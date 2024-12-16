//斐波那契数列1.0
#include <stdio.h>
#include <stdlib.h>
void printfFibonacci(int n)
{
    int fib1=0,fib2=1,next;

    for(int i=1;i<=n;i++)
    {
        printf("%d",fib1);
        next=fib1+fib2;
        fib1=fib2;
        fib2=next;
    }
    printf("\n");
}
int main()
{
    int N;
    printf("请输入要输出的斐波那契数列的个数N:");
    scanf("%d",&N);
    printfFibonacci(N);
    return 0;
}
