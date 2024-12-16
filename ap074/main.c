//找到10000以内的自然数中的所有完数，并统计找到的完数个数
//完数指它敲好等于除它本身之外的因子之和
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s,count=0;
    printf("找到的完数有：\n");
    for(n=1;n<10000;n++){
        s=0;
        for(i=1;i<n;i++){
            if(n%i==0)
                s+=i;
        }
        if(s==n){
            printf("%d, ",n);
            count++;
        }
    }
    printf("\n完数个数=%d\n",count);
    return 0;
}
