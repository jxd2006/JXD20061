#include <stdio.h>
/*int main()
{
    int a[10];
    int i,j;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        printf("%d",a[i]);
        if(i<9)
        printf(",");
    }
    printf("\n");
    for(i=0;i<5;i++){
        j=a[i];
        a[i]=a[9-i];
        a[9-i]=j;
    }
    for(i=0;i<10;i++){
        printf("%d",a[i]);
        if(i<9)
        printf(",");
    }
    return 0;
}*/

/*int main()
{
    int i,temp;
    int a[10];
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++){
        temp=a[i];
        a[i]=a[i+5];
        a[i+5]=temp;
    }
    for(i=0;i<10;i++){
    printf("%d",a[i]);
    if(i<9)
    printf(",");
    }
    return 0;
}*/

//���ڴ�������Ĵ��룬���ӳ��������Dev C++�����е��Ժ����ύ
/*#include <math.h>
int main()
{
    int a[20];
    int count=0;
    int i,j=0,sum=0;
    float aver,end;
    for(i=0;i<20;i++)
    scanf("%d",&a[i]);
    for(i=0;i<20;i++)
    sum+=a[i];
    aver=sum/20.0;
    printf("������ίƽ����:%.3f��.\n",aver);
    printf("���ϸ�÷�:");
    for(i=0;i<20;i++){
        if(fabs(a[i]-aver)>10){
        count++;
        j+=a[i];
        printf("%d ",a[i]);
        }
    }
    printf(".\n");
    if(count>0&&count<20){
    end=(sum-j)/(float)(20-count);
    printf("���÷�:%.3f��.\n",end);
    }
    else if(count==20){
    printf("�޺ϸ���.\n");
    }
    return 0;
}*/

//���ڴ�������Ĵ��룬���ӳ��������Dev C++�����е��Ժ����ύ
int main()
{
    int N=0,i,j;
    scanf("%d",&N);
    int a[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0,down=0,up=0,medium=0;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            sum+=a[i][j];
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<=i;j++){
            down+=a[i][j];
        }
    }
    for(i=0;i<N;i++){
        medium+=a[i][i];
    }
    up=sum-down+medium;
    printf("%d %d",up,down);
    return 0;
}




