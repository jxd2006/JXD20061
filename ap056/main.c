#include<stdio.h>
int main()
{
    int count=0,num;
    printf("������һ����Ȼ����");
    scanf("%d",&num);
    do{
        printf("%d,",num%10);
        num=num/10;
        count++;
    }while(num!=0);
    printf("\n����һ��%dλ��.\n",count);
    return 0;
}
