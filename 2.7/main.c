//#include <stdio.h>
//#include <stdlib.h>

/*int gcd(int a,int b);
void simplifyFraction(int *i, int *j);
int main()
{
    int a=0,b=0,c=0,d=0;
    char o;
    int i=0,j=0;
    while(scanf("%d/%d%c%d/%d\n",&a,&b,&o,&c,&d)==5){
        switch(o){
    case'+':
        i=a*d+b*c;
        j=b*d;
        break;
    case'-':
        i=a*d-b*c;
        j=b*d;
        break;
        }
     simplifyFraction(&i,&j);
    if(j==1){
        printf("%d\n",i);
    }
    else if(i==0){
        printf("0\n");
    }
    else{
        if(i<0){
            printf("-%d/%d\n",-i,j);
        }
        else{
            printf("%d/%d\n",i,j);
        }
    }
    }
    return 0;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
void simplifyFraction(int *i, int *j) {
    int k=gcd(*i,*j);
    *i/=k;
    *j/=k;
}*/




/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void huajian(int* x,int* y)
{
    int j,k;
    if((*x)*(*y)<0)
    {
        *x=fabs(*x);
        *y=fabs(*y);
        for(j=*x;j>=1;j--)
        {
            if((*x)%j==0&&(*y)%j==0)
            {
                k=j;
                break;
            }
        }
        *x=-(*x)/j;
        *y=(*y)/j;
    }
     else if((*x)*(*y)>0)
     {
        *x=fabs(*x);
        *y=fabs(*y);
        for(j=*x;j>=1;j--)
        {
            if((*x)%j==0&&(*y)%j==0)
            {
                k=j;
                break;
            }
        }
          *x=(*x)/j;
          *y=(*y)/j;
    }
}

int main()
{
    int a,b,d,e;
    char c0,c1,c2;
    while(scanf("%d%c%d%c%d%c%d",&a,&c1,&b,&c0,&d,&c2,&e)==7)
    {
        if(c0=='-')
        {
            int n=a*e-d*b;
            int m=b*e;
            if((int)fabs(n)%(int)fabs(m)==0)
            {
                int d1=n/m;
                printf("%d\n",d1);
            }
            else
            {
            huajian(&n,&m);
            printf("%d/%d\n",n,m);
            }
        }
        else if(c0=='+')
        {
            int n=a*e+d*b;
            int m=b*e;
            if(n==0)
            {
                printf("0\n");
            }
            else if((int)fabs(n)%(int)fabs(m)==0)
            {
                int d2=fabs(n)/fabs(m);
                printf("%d\n",d2);
            }
            else
            {
            huajian(&n,&m);
            printf("%d/%d\n",n,m);
            }
        }

    }
    return 0;
}*/





#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void simplification(int*x,int*y)
{
    int m,n;
    if((*x)*(*y)<0){
        *x=fabs(*x);
        *y=fabs(*y);
        for(m=*x;m>=1;m--){
            if((*x)%m==0&&(*y)%m==0){
                n=m;
                break;
            }
        }
        *x=-(*x)/m;
        *y=(*y)/m;
    }
    else if((*x)*(*y)>0){
        *x=fabs(*x);
        *y=fabs(*y);
        for(m=*x;m>=1;m--){
            if((*x)%m==0&&(*y)%m==0){
                n=m;
                break;
            }
        }
        *x=(*x)/m;
        *y=(*y)/m;
    }
}

int main()
{
    int a,b,c,d;
    char o,p,z;
    while(scanf("%d%c%d%c%d%c%d",&a,&o,&b,&p,&c,&z,&d)==7){
        if(o=='-'){
            int i=a*d-b*c;
            int j=b*d;
            if((int)fabs(i)%(int)fabs(j)==0){
                int e=i/j;
                printf("%d\n",e);
            }
            else{
                simplification(&i,&j);
                printf("%d/%d",i,j);
            }
        }
        else if(o=='+'){
            int i=a*d+b*c;
            int j=b*d;
            if(i==0){
                printf("0\n");
            }
            else if((int)fabs(i)%(int)fabs(j)==0){
                int f=fabs(i)/fabs(j);
                printf("%d\n",f);
            }
            else{
                simplification(&i,&j);
                printf("%d/%d\n",i,j);
            }
        }
    }
    return 0;
}
