//��д����ͳ�Ʋ����ĳ�����ַ��ڸ����ַ����г��ֵĴ�����
//��������ʱ������һ������һ���Իس��������ַ���������80���ַ�����
//���ڵڶ�������һ���ַ�������������ַ����ַ����г��ֵĴ�����
#include <stdio.h>
int main()
{
    char arr[80],s;
    int i=0,count=0;
    gets(arr);
    s=getchar();
    while(arr[i]!='\0'){
        if(arr[i++]==s){
            count++;
        }
    }
    printf("\ncount is:%d\n",count);
    return 0;
}
