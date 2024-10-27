#include <stdio.h>
#include <stdlib.h>
int func(int r,int c)
{
    return(c==1||c==r)?1:func(r-1,c-1)+func(r-1,c);
}

int main()
{
    int n;
    printf("请输入杨辉三角的阶数:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf("  ");
        }
            for(int j=1;j<=i;j++)
            {
                printf("%6d",func(i,j));
            }
            printf("\n");
    }
    return 0;
}
