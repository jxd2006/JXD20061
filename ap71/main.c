//有0、1、2、3、4、5共5个数字，能组成多少个互不相同且无重复数字的3位数？
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,count=0;
    printf("找到的互不相同且无重复数字的3位数：\n");
    for(i=1;i<=4;i++){
        for(j=0;j<=4;j++){
            for(k=0;k<=4;k++){
                if(i!=j&&j!=k&&k!=i){
                    printf("%d ",i*100+j*10+k);
                    count++;
                    if(count%5==0){
                        printf("\n");
                    }
                }
            }
        }
    }
    printf("\n3位数总个数=%d\n",count);
    return 0;
}
