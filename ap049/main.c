#include<math.h>
int main()
{
    double a,b,c,x1,x2;
    double delta;
    printf("����3��ϵ��:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0)
        if(b==0)
        if(c==0)
        printf("��������ֵ��");
    else
        printf("�޸���");
    else{
        x1=-c/b;
        printf("Ψһ����%f",x1);
    }
    else{
        delta=b*b-4*a*c;
        if(delta>0){
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("������:x1=%f,x2=%f",x1,x2);
        }
        else if(delta==0){
            x1=(-b)/(2*a);
            printf("һ������x=%f",x1);
        }
        else
            printf("��ʵ����");
    }
    return 0;
}
