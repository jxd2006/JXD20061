#include <stdio.h>
#include <stdlib.h>

//��ָ����Ϊ������������������������
/*int main()
{
    int a,b;
    void sort(int *,int *);
    printf("��������������:");
    scanf("%d%d",&a,&b);
    sort(&a,&b);
    printf("��������Ľ��:%d, %d\n",a,b);
    return 0;
}
void sort(int *p1,int *p2){
    int c;
    if(*p1>*p2){
        c=*p1; *p1=*p2; *p2=c;
    }
}*/

//һά�����ָ����Ϊ��������
//����������鲢��һ���µ���������
/*#define M 10
#define N 8
void merge_sort(int *x,int lenx,int *y,int leny,int *z){
    int i=0,j=0,k=0;
    while(i<lenx&&j<leny)
        if(x[i]<y[j]) z[k++]=x[i++];
        else z[k++]=y[j++];
        while(i<lenx)
            z[k++]=x[i++];
        while(i<leny)
            z[k++]=y[i++];
}
int main()
{
    int a[M]={0,1,3,8,8,25,30,36,40,50};
    int b[N]={-5,-1,2,5,25,32,35,38},i,c[M+N];
    printf("ԭʼ����������a:\n\t");
    for(i=0;i<M;i++)
        printf("%d, ",a[i]);
    printf("\nԭʼ����������b:\n\t");
    for(i=0;i<N;i++)
        printf("%d, ",b[i]);
    merge_sort(a,M,b,N,c);
    printf("\n�鲢�õ�����������c:\n\t");
    for(i=0;i<M+N;i++)
        printf("%d, ",c[i]);
    printf("\n");
    return 0;
}*/

//��ά�����ָ����Ϊ��������
//���ĸ�ѧ����ÿ��ѧ�������ſγ̵ĳɼ���ÿ�ſγ̵�ѧ�ֲ�һ��
//����ÿ��ѧ���ļ�Ȩƽ���ɼ�
#define N 3
/*int main()
{
    int scores[4][N]={{82,98,72},{94,64,83},{68,83,95},{79,76,86}};
    int credit[N]={3,4,2},i;
    float aver(int *,int *),p;
    for(i=0;i<4;i++){
        p=aver(scores[i],credit);
        printf("��%d��ѧ���ļ�Ȩƽ���ɼ�Ϊ:%.2f\n",i+1,p);
    }
    return 0;
}
float aver(int x[],int y[]){
    int n,sum1=0,sum2=0;
    for(n=0;n<N;n++){
        sum1+=x[n]*y[n];
        sum2+=y[n];
    }
    return ((float)sum1/sum2);
}*/

/*int main()
{
    int scores[4][N]={{82,98,72},{94,64,83},{68,83,95},{79,76,86}};
    int credit[N]={3,4,2},i;
    float aver(int (*)[N],int *),p;
    for(i=0;i<4;i++){
        p=aver(scores+i,credit);
        printf("��%d��ѧ���ļ�Ȩƽ���ɼ�Ϊ:%.2f\n",i+1,p);
    }
    return 0;
}
float aver(int (*x)[N],int *y)
{
    int n=0,sum1=0,sum2=0;
    for(n=0;n<N;n++){
        sum1+=(*(*x+n))*(*(y+n));
        sum2+=*(y+n);
    }
    return ((float)sum1/sum2);
}*/

//����ָ��ĺ���
int main()
/*{
    int a[10]={60,30,27,54,59,92,47,76,82,18},*max(int *),*p;
    p=max(a);
    printf("���ֵ=%d\n",*p);
    return 0;
}
int *max(int *p){
    int i,*q=p;
    for(i=1;i<10;i++)
        if(*(p+i)>*q) q=p+i;
    return q;
}*/

//������ͼ�鰴��ĸ˳����С���������������
#include <string.h>
void sort(char *p[],int),prn(char *p[],int);
int main()
{
    char *book[]={"The C Programming Language",
                  "Database Design",
                  "Database System Implementation",
                  "Software Engineering"};
    sort(book,4);
    prn(book,4);
    return 0;
}

void sort(char *p[],int n){
    int i,j,minpost;
    char *t;
    for(i=0;i<n-1;i++){
        minpost=i;;
        for(j=i+1;j<n;j++)
            if(strcmp(p[j],p[minpost])<0)
            minpost=j;
        if(minpost!=j){
            t=p[i]; p[i]=p[minpost]; p[minpost]=t;
        }
    }
}
void prn(char *p[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%s\n",p[i]);
}




