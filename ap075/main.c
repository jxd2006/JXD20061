//����2.0
#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,s,m,count=0;
    printf("�ҵ���������:\n");
    for(n=2;n<10000;n++){
        s=1;
        m=sqrt(n);
        for(i=2;i<=m;i++){
            if(n%i==0)
                s+=i+n/i;
            if(n==m*m)
                s-=m;
        }
            if(s==n){
                printf("%d, ",n);
                count++;
            }
    }
    printf("\n��������=%d\n",count);
    return 0;
}
