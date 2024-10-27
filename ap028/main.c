#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[1000];
    FILE*file;

    printf("请输入一个字符串：");
    fgets(str,sizeof(str),stdin);

    file=fopen("output.txt","w");
    if(file==NULL)
    {
        perror("文件打开失败");
        return EXIT FAILURE;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        fprint(file,"%c\n",str[i]);
    }
    fclose(file);
    printf("字符串已写入文件output.txt\n");
    return EXIT SUCCESS;
}
