#include <stdio.h>
#include <stdlib.h>

//��дһ�����򣬼����û������һ�����ʽ��ֵ���ñ��ʽ��ֻ��+��-�����

/*double evaluate(double left,char op,double right)
{
    switch(op){
case '+':
    return left+right;
case '-':
    return left-right;
    }
}

    int main()
{
    double left,right;
    char op;
    printf("��������������ʽ:\n");
    scanf("%lf",&left);
    while(1){
        op=getchar();
        if(op=='\n') break;
        scanf("%lf",&right);
        left=evaluate(left,op,right);
    }
    printf("��������%lf\n",left);
    return 0;
}*/

//����һ���������ŵ�����������ʽ�����������
/*double evaluate(double left,char op,double right)
{
    switch(op){
case '+':
    return left+right;
case '-':
    return left-right;
    }
}

double get_operand(){
    double val;
    scanf("%lf",&val);
    return val;
    }

char get_operator(){
        char c=getchar();
        return c;
    }

int prior(char op1,char op2){
    int flag;
    if(op1=='*'||op1=='/')
        if(op2=='+'||op2=='-')  flag=1;
        else                    flag=0;
    else
        if(op2=='+'||op2=='-')  flag=0;
            else                flag=-1;
            return flag;
}
int main()
{
    double value1,value2,value3,result;
    char op1,op2;
    printf("��������������ʽ��\n");
    value1=get_operand();
    op1=get_operator();
    if(op1=='\n')
        result=value1;
    else{
        value2=get_operand();
        while((op2=get_operator())!='\n'){
            value2=get_operand();
            if(prior(op2,op1)>0)
                value2=evaluate(value2,op1,value3);
            else{
                value1=evaluate(value1,op1,value2);
                op1=op2;
                value2=value3;
            }
        }
        result=evaluate(value1,op1,value2);
    }
    printf("���Ϊ��%f\n",result);
    return 0;
}*/

//ָ������ļ�ӷ���
/*int main(){
    int a=10,b,*i_p1,*i_p2;
    i_p1=&a;
    i_p2=&b;
    *i_p2=*i_p1+5;
    printf("%d,%d\n",a,b);
    printf("%d,%d\n",*i_p1,*i_p2);
    printf("%x,%x\n",i_p1,i_p2);
    printf("%x,%x\n",&i_p1,&i_p2);
    return 0;
}*/

//ͨ��ָ�뽫��������a��b���������
int main(){
    int a,b,*p1,*p2,*p;
    printf("����������������");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    if(a>b){
        p=p1;p1=p2;p2=p;
    }
    printf("ԭ����˳��Ϊ��");
    printf("%d %d\n",a,b);
    printf("���������Ϊ��");
    printf("%d %d\n",*p1,*p2);
    return 0;
}
