//���ڴ�������Ĵ��룬���ӳ��������Dev C++�����е��Ժ����ύ
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,flag=0,count=0;
    char a[1000];
    char b[100];
    scanf("%[^\n]",a);
    getchar();
    scanf("%[^\n]",b);
    int lena=strlen(a);
    int lenb=strlen(b);
    for(i=0;i<lena;i++){
        if(a[i]==b[0]){
            for(j=0;j<lenb;j++){
                if(a[i+j]==b[j]){
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag){
                printf("%d\n",i);
                count++;
            }
        }
    }
    if(count==0){
        printf("-1");
    }
    return 0;
}


