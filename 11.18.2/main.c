//��һ����С��2�������ֽ���������
#include<stdio.h>
int main()
{
    int n,k=2;
    printf("������һ�����ڻ����2��������\n");
    scanf("%d",&n);
    printf("�����ӷֽ���Ϊ��%d=",n);
    while(1){
        if(n%k==0){
            n/=k;
            if(n>1)
                printf("%d*",k);
            else{
                printf("%d\n",k);
                break;
            }
        }
        else k++;
    }
    return 0;
}
