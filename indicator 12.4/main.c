//ͨ��ָ�뽫��������a��b���������
/*int main(){
    int a,b,*p1,*p2,*p;
    printf("����������������");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    if(a>b){
        p=p1;  p1=p2;  p2=p;
    }
    printf("ԭ����˳��Ϊ��");
    printf("%d %d\n",a,b);
    printf("���������Ϊ��");
    printf("%d %d\n",*p1,*p2);
    return 0;
}*/

//��д����һ�������뵽���������У�ʹ�ò�����������������
/*#define N 10
int main()
{
    int i, m, a[N]={5,8,12,15,16,20,25,36,55}, *p=a+N-2;
    printf("������һ�������������:");
    scanf("%d",&m);
    while(p>=a)
    if(*p>m){
        *(p+1)=*p;
        p--;
    }
    else break;
    *(p+1)=m;
    printf("�����������в���&d֮��Ľ��Ϊ:\n",m);
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}*/

//���ַ�������ȡ����
/*int main()
{
    char str[81], *p=str;
    int num,count=0;
    printf("������һ������������ֵ��ַ���:\n");
    gets(str);
    printf("�Ӹ��ַ������ҵ��������У�\n");
    while(*p){
        if(*p>='0'&&*p<='9'){
            for(num=0;*p>='0'&&*p<='9';p++)
                num=num*10+(*p-'0');
            count++;
            printf("No:%d: %d ",count,num);
        }
        else
            while(*p!='\0'&&(*p<'0'||*p>'9'))
            p++;
    }
    printf("\n���ҵ�%d������.\n",count);
    return 0;
}*/

//��ά��������ú����

int main(){
    int sum=0,i,j,a[3][4];
    printf("������12������:\n");
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
        sum+=a[i][j];
    printf("����a:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            printf("a[%d,%d]=%2d ",i,j,a[i][j]);
        printf("\n");
    }
    printf("***��������Ԫ�صĺ�=%d***\n",sum);
    return 0;
}
