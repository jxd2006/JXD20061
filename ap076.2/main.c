#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[81];
   int i=0,word=0;
   printf("������һ���ַ�:\n");
   gets(str);
   while(str[i]!='\0'){
    if(str[i]==' ')
        for(i++;str[i]==' ';i++);
    else{
        word++;
        for(i++;str[i]!=' '&&str[i]!='\0';i++);
    }
   }
   printf("�����ַ��й���%d������.\n",word);
    return 0;
}
