#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int a,b;
      int p=1;
      scanf("%d %d",&a,&b);
      int x1=a,x2=b;
      while(p!=0){
          p=a%b;
          a=b,b=p;
      }
      int x=(x1/a)*x2;
      printf("���Լ����:%d\n",a);
      printf("��С��������:%d\n",x);

	  /*********End**********/
       return 0;
	}
