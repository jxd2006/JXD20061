#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int a,b, *p1, *p2, *p;
    printf("����������������");
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    if(a>b){
        p=p1;p1=p2;p2=p;
    }
    printf("ԭ����˳��Ϊ��");
    printf("%d,%d\n",a,b);
    printf("���������Ϊ��");
    printf("%d,%d\n", *p1, *p2);
    return 0;
}*/

/*int main()
{
  int a=10, * i_p;
  float x=2.7, * f_p;
  i_p=(int * )&x;
  f_p=(float * )&a;
  printf("i_p=%x,&x=%x\n",i_p,&x);
  printf("f_p=%x,&a=%x\n",f_p,&a);
  printf("x=%f,a=%d\n", * i_p, * f_p);
  return 0;
}*/

/*#define N 10
int main()
{
    int i,m,a[N]={5,8,12,15,16,20,25,36,55}, *p=a+N-2;
    printf("������һ�������������:");
    scanf("%d",&m);
    while(p>=a)
    if( *p>m){
         *(p+1)= *p;
         p--;
    }
    else break;
    *(p+1)=m;
    printf("�����������в���%d֮��Ľ��Ϊ��\n",m);
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}*/

/*int main()
{
    int n,a[10],*p=a;
    for(n=0;n<10;n++)
        *(p+n)=2*n+1;
    for(p=a;p<a+10;p++)
        printf("%d,",*p);
    return 0;
}*/

/*int main()
{
    char str[81], *p=str;
    int num,count=0;
    printf("������һ������������ֵ��ַ�����\n");
    gets(str);
    printf("�Ӹ��ַ������ҵ��������У�\n");
    while( *p){
        if( *p>='0'&& *p<='9'){
            for(num=0; *p>='0'&& *p<='9';p++)
                num=num*10+(*p-'0');  // *p-'0'��ʾ�������ַ�*pתΪ����
            count++;
            printf("No %d: %d ",count,num);
        }
        else
            while( *p!='\0'&&( *p<'0'|| *p>'9'))
            p++;
    }
    printf("\n���ҵ�%d������.\n",count);
    return 0;
}*/


