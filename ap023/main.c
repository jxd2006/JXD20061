//����һ���ַ������������ASCII�������ַ�
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ap[10]={0};
   int i=0;
   int max=0;
   printf("������һ���ַ�����");
   scanf("%s",ap);
   int op=sizeof(ap)-1;
   for(i=0;i<=op;i++)
   {
       if(max<+ap[i])
       {
           max=ap[i];
       }
       if(max>ap[i])
       {
           max=max;
       }
   }
   printf("ASCII������ַ�Ϊ:%c",max);
   return 0;
}
