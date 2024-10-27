#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int a[3];
	  int max=0;
	  int min=10000;
	  int zhong;
	  printf("请输入三个整数:");
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
      printf("从小到大排列为:%d,%d,%d",min,zhong,max);
	  /*********End**********/
       return 0;
	}
