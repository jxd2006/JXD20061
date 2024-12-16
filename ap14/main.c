#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    while(scanf("%d",&a)==1)
    {
        c=0;
        b=a;
        while(a>0)
        {
            c=c*10+a%10;
            a=a/10;
        }
        if(b==c)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
