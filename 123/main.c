#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int a,b, *p1, *p2, *p;
    printf("请输入两个整数：");
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    if(a>b){
        p=p1;p1=p2;p2=p;
    }
    printf("原来的顺序为：");
    printf("%d,%d\n",a,b);
    printf("升序排序后为：");
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
    printf("请输入一个待插入的整数:");
    scanf("%d",&m);
    while(p>=a)
    if( *p>m){
         *(p+1)= *p;
         p--;
    }
    else break;
    *(p+1)=m;
    printf("在升序数组中插入%d之后的结果为：\n",m);
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
    printf("请输入一个包含多段数字的字符串：\n");
    gets(str);
    printf("从该字符串中找到的整数有：\n");
    while( *p){
        if( *p>='0'&& *p<='9'){
            for(num=0; *p>='0'&& *p<='9';p++)
                num=num*10+(*p-'0');  // *p-'0'表示将数字字符*p转为数字
            count++;
            printf("No %d: %d ",count,num);
        }
        else
            while( *p!='\0'&&( *p<'0'|| *p>'9'))
            p++;
    }
    printf("\n共找到%d个整数.\n",count);
    return 0;
}*/


