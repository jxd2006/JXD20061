//����һ���ַ�����������ǿմ�������ԭ�����������ǿմ�����������մ���
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("������һ���ַ�����");
    fgets(str,sizeof(str),stdin);
    if(strcmp(str,"\n")==0||strlen(str)==1)
    {
        printf("�մ�\n");
    }
    else{
        printf("������ַ�����:%s",str);
    }
    return 0;
}
