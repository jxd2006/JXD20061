#include <stdio.h>
#include <math.h>

int main()
{
    int m,k,i;
    printf("������һ����������");
    scanf("%d",&m);
    k=sqrt(m);
    for(i=2;i<=k;i++){
        if(m%i==0)
            break;
    }
    if(i>k)printf("%d��������\n",m);
    else printf("%d����������\n",m);
    return 0;
}
