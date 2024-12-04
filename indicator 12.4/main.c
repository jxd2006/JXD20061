//通过指针将两个变量a和b按升序输出
/*int main(){
    int a,b,*p1,*p2,*p;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    if(a>b){
        p=p1;  p1=p2;  p2=p;
    }
    printf("原来的顺序为：");
    printf("%d %d\n",a,b);
    printf("升序排序后为：");
    printf("%d %d\n",*p1,*p2);
    return 0;
}*/

//编写程序将一个数插入到升序数组中，使得插入后该数组仍是升序
/*#define N 10
int main()
{
    int i, m, a[N]={5,8,12,15,16,20,25,36,55}, *p=a+N-2;
    printf("请输入一个待插入的整数:");
    scanf("%d",&m);
    while(p>=a)
    if(*p>m){
        *(p+1)=*p;
        p--;
    }
    else break;
    *(p+1)=m;
    printf("在升序数组中插入&d之后的结果为:\n",m);
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}*/

//从字符串中提取整数
/*int main()
{
    char str[81], *p=str;
    int num,count=0;
    printf("请输入一个包含多段数字的字符串:\n");
    gets(str);
    printf("从该字符串中找到的整数有：\n");
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
    printf("\n共找到%d个整数.\n",count);
    return 0;
}*/

//二维数组的引用和求和

int main(){
    int sum=0,i,j,a[3][4];
    printf("请输入12个整数:\n");
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
        sum+=a[i][j];
    printf("数组a:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            printf("a[%d,%d]=%2d ",i,j,a[i][j]);
        printf("\n");
    }
    printf("***数组所有元素的和=%d***\n",sum);
    return 0;
}
