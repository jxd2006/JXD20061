#include<stdio.h>
int main()
{
    int a,i,j;
    char ch;
    while(scanf("%d %c",&a,&ch)==2)
    {
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=(2*i-1);j++)
                printf("%c",ch);
            printf("\n");

        }
        for(i=a-1;i>=0;i--)
        {
            for(j=1;j<=2*i-1;j++)
                printf("%c",ch);
            printf("\n");

        }
    }
    return 0;
}
