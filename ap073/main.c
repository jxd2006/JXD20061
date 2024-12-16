//水仙花数2.0
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,count=0;
    printf("找到的水仙花数有：\n");
    for(n=100;n<1000;n++){
        i=n/100;j=n/10%10;k=n%10;
        if(i*i*i+j*j*j+k*k*k==n){
            printf("%d, ",n);
            count++;
        }
    }
    printf("\n水仙花数=%d\n",count);
    return 0;
}
