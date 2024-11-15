//¶þ·Ö·¨
#include<stdio.h>
#include<math.h>
double loop(double x)
{
    return pow(x,5) - 2 * pow(x,4) + pow(x,2) - 3;
}

int main()
{
    double a=0,b=2;
    double x=0,c=0,y=0,s=0;
    scanf("%lf",&c);
    do{
            x=(a+b)/2;
    y=loop(x);
    s=fabs(y);
    if(s<c){
        printf("%.8f\n",x);
        break;
    }
    else{
            if(y*loop(a)>0)
                a=x;
            else
                b=x;
    }

    }while(s>=c);
    return 0;
}
