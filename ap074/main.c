//�ҵ�10000���ڵ���Ȼ���е�������������ͳ���ҵ�����������
//����ָ���úõ��ڳ�������֮�������֮��
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s,count=0;
    printf("�ҵ��������У�\n");
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
    printf("\n��������=%d\n",count);
    return 0;
}
