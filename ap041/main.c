//��д���򣬸����û��������λ����������ʾ�������е����֡�
//���磬�û�����48����ô�������84��
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("����һ����λ����");
    scanf("%d",&a);
    int b=a/10;
    int c=a-10*b;
    b=b+c;
    c=b-c;
    b=b-c;
    printf("%d%d\n",b,c);
    return 0;
}
