#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int a[3];
	  int max=0;
	  int min=10000;
	  int zhong;
	  printf("��������������:");
	  for(int i=0;i<3;i++)
      {
          scanf("%d",&a[i]);
      }
      for(int i=0;i<3;i++)
      {
          if(max<a[i])
          {
              max=a[i];
          }
          if(min>a[i])
          {
              min=a[i];
          }
      }
      for(int i=0;i<3;i++)
      {
          if(a[i]!=max&&a[i]!=min)
          {
              zhong=a[i];
          }
      }
      printf("��С��������Ϊ:%d,%d,%d",min,zhong,max);
	  /*********End**********/
       return 0;
	}
