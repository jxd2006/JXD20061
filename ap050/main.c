#include<stdio.h>
int main()
{
    int c;
    float pay,discount;
    printf("����ͻ��ȼ�:\n");
    scanf("%d",&c);
    printf("������Ʒ�ܽ��:\n");
    scanf("%f",&pay);
    switch(c)
    {
        case 1:discount=0.9;break;
        case 2:discount=0.85;break;
        case 3:discount=0.8;break;
        default:discount=1.0;
    }
    pay=pay*discount;
    printf("You should pay:%.2f\n",pay);
    return 0;
}
