#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("��������ݣ�");
    scanf("%d",&a);
    if(a%400==0||(a%4==0&&a%100!=0))
    printf("����\n");
    else
        printf("ƽ��\n");
    return 0;
}
