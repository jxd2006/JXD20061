//������е�ˮ�ɻ���
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,count=0;
    printf("�ҵ���ˮ�ɻ����У�\n");
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
    printf("\nˮ�ɻ����ĸ���=%d",count);
    return 0;
}
