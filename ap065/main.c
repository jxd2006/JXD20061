//在100以内的正整数里 输出与8有关的数
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++){
        if(i%8==0){
            printf("%d\n",i);
        }
      if(i%10==8||i/10==8){
        printf("%d\n",i);
      }
    }
    return 0;
}
