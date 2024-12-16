//输出所有的水仙花数
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,count=0;
    printf("找到的水仙花数有：\n");
    for(i=1;i<=9;i++){
        for(j=0;j<=9;j++){
            for(k=0;k<=9;k++){
                if(i*i*i+j*j*j+k*k*k==i*100+j*10+k){
                    printf("%d\n",i*100+j*10+k);
                    count++;
                }
            }
        }
    }
    printf("\n水仙花数的个数=%d",count);
    return 0;
}
