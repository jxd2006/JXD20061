#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,p,loop=1;
    printf("����������������:\n");
    scanf("%d%d",&m,&n);
    while(loop){
        p=m%n;
        if(p==0)loop=0;
        else
            {m=n;n=p;}
    }
    printf("���Լ����%d\n",n);
    return 0;
}
