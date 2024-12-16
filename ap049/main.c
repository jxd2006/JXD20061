#include<math.h>
int main()
{
    double a,b,c,x1,x2;
    double delta;
    printf("输入3个系数:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0)
        if(b==0)
        if(c==0)
        printf("根是任意值！");
    else
        printf("无根！");
    else{
        x1=-c/b;
        printf("唯一根：%f",x1);
    }
    else{
        delta=b*b-4*a*c;
        if(delta>0){
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("两个根:x1=%f,x2=%f",x1,x2);
        }
        else if(delta==0){
            x1=(-b)/(2*a);
            printf("一个根：x=%f",x1);
        }
        else
            printf("无实根！");
    }
    return 0;
}
