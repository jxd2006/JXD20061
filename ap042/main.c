//计算1到10所有数的平方和
#include<stdio.h>
int main()
{
    int a;
    int sum=0;
    for(a=1;a<=10;a++)
    {
        sum+=a*a;
    }
    printf("%d\n",sum);
    return 0;
}
