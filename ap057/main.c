#include<stdio.h>
#include<math.h>
int main()
{
    float x,x0,f,f1;
    printf("������һ�����ƽ⣺");
    scanf("%f",&x);
    do{
        x0=x;
        f=((2*x-4)*x+3)*x-6;
        f1=(6*x-8)*x+3;
        x=x-f/f1;
    }while (fabs(x-x0)>=1e-5);
    printf("ţ�ٵ�������õķ��̽��ƽ⣺%.4f\n",x);
    return 0;
}
