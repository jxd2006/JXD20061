//��0��1��2��3��4��5��5�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ�3λ����
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,count=0;
    printf("�ҵ��Ļ�����ͬ�����ظ����ֵ�3λ����\n");
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
    printf("\n3λ���ܸ���=%d\n",count);
    return 0;
}
