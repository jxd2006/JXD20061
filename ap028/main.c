#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[1000];
    FILE*file;

    printf("������һ���ַ�����");
    fgets(str,sizeof(str),stdin);

    file=fopen("output.txt","w");
    if(file==NULL)
    {
        perror("�ļ���ʧ��");
        return EXIT FAILURE;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        fprint(file,"%c\n",str[i]);
    }
    fclose(file);
    printf("�ַ�����д���ļ�output.txt\n");
    return EXIT SUCCESS;
}
