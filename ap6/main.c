#include<stdio.h>
#include<math.h>

//����main����
int main()
{
	//���ڴ�������Ĵ���
	/*****************Begin******************/
    double x1=0.0;
    double x0;
    do{
        x0=x1;
        x1=cos(x0);
    }while(((x0-x1)>0.000001)||(x0-x1)<-0.000001);
    printf("root=%lf",x0);
    return 0;
}

