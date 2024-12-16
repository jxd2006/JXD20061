#include<stdio.h>
int main()
{
    int count=0,num;
    printf("请输入一个自然数：");
    scanf("%d",&num);
    do{
        printf("%d,",num%10);
        num=num/10;
        count++;
    }while(num!=0);
    printf("\n它是一个%d位数.\n",count);
    return 0;
}
