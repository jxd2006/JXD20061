//输入一个字符串，输出其中ASCII码最大的字符
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ap[10]={0};
   int i=0;
   int max=0;
   printf("请输入一个字符串：");
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
   printf("ASCII码最大字符为:%c",max);
   return 0;
}
