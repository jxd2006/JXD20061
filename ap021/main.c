//��д��������һ���������У��������������֮��Ĳ�ֵ��
#include<stdio.h>

int main()
{
    int n,i;
    printf("���������ֵĸ�����");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("���ָ����������0��\n");
        return 1;
    }
    int numbers[n];
    printf("������%d������;\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d��%d֮��Ĳ�ֵ�ǣ�%d\n",numbers[i],numbers[i+1],numbers[i+1]-numbers[i]);
    }
    return 0;
}
