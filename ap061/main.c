#include<stdio.h>
int main()
{
    int n,i=0;
    printf("大于100且小于150的不能被3整除的整数有：\n");
    for(n=101;n<150;n++)
    {
        if(n%3==0)continue;
        printf("%d,",n);
        i++;
        if(i%10==0)printf("\n");
    }
    printf("\n");
    return 0;
}
