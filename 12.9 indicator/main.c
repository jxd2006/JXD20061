#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//���ö�ά�����ӡ���������
/*#define N 6
int main()
{
    int a[N][N],i,j;
    for(i=0;i<N;i++)
        a[i][0]=a[i][i]=1;
    for(i=2;i<N;i++)
        for(j=1;j<i;j++)
        a[i][j]=a[i-1][j-1]+a[i-1][j];
    printf("������������£�\n");
    for(i=0;i<N;i++){
        for(j=0;j<=i;j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
    return 0;
}*/

//ĳ��˾����5����Ʒ��ÿ����Ʒĳ��4�����ȵ����۶���֪��
//Ҫ�����ÿ����Ʒ4�����ȵĺϼ����۶��Լ�ÿ������5����Ʒ�������۶
/*int main()
{
    int sum,total,i,j;
    int sales[6][5]={{0},
                     {0,90,85,87,93},
                     {0,84,78,96,88},
                     {0,64,95,87,72},
                     {0,96,60,94,92},
                     {0,84,86,82,88}};
    for(i=1;i<=5;i++){
        sum=0;
        for(j=1;j<=4;j++)
            sum+=sales[i][j];
        sales[i][0]=sum;
    }
    for(j=0;j<=4;j++){
        total=0;
        for(i=1;i<=5;i++)
            total+=sales[i][j];
        sales[0][j]=total;
    }
    printf("���\tһ���� ������ ������ �ļ��� ��ϼ�\n");
    for(i=1;i<=5;i++){
        printf("%2d\t",i);
        for(j=1;j<=4;j++)
            printf("%4d\t",sales[i][j]);
        printf("%5d\n",sales[i][0]);
    }
    printf("����\t");
    for(j=1;j<=4;j++)
        printf("%4d\t",sales[0][j]);
    printf("%5d\n",sales[0][0]);
    return 0;
}*/


/*int main()
{
    int a[3][4]={{1,2,3,4},{8,7,6,5},{4,1,9,6}};
    int i,j,k,*p=&a[0][0];
    printf("�����ά����:\n");
    while(p<=&a[2][3]){
        printf("%3d",*p++);
        if((p-&a[0][0])%4==0)
            printf("\n");
    }
    return 0;
}*/


/*int main()
{
    int a[3][4]={1,2,3,4,8,7,6,5,4,1,9,6};
    int i,j,(*p)[4]=a;
    printf("���1��\n");
    while(p<a+3){
        for(j=0;j<4;j++)
            printf("%3d",*(*p+j));
        p++;
        printf("\n");
    }
    p=a;
    printf("���2��\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            printf("%3d",(*(*p+i)+j));
        printf("\n");
    }
    return 0;
}*/

//strcmp����������
int main()
{
    char str1[20],str2[20],str3[20],temp[20];
    printf("������3���ַ���(ÿ���ַ������Իس�������)��\n");
    gets(str1);
    gets(str2);
    gets(str3);
    if(strcmp(str1,str2)>0){
        strcpy(temp,str1);
        strcpy(str1,str2);
        strcpy(str2,temp);
    }
    if(strcmp(str2,str3)>0){
        strcpy(temp,str2);
        strcpy(str2,str3);
        strcpy(str3,temp);
    }
    if(strcmp(str1,str2)>0){
        strcpy(temp,str1);
        strcpy(str1,str2);
        strcpy(str2,temp);
    }
    printf("�����:\n");
    puts(str1);
    puts(str2);
    puts(str3);
    return 0;
}


