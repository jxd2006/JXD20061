//a+aa+aaa+...+aaaaa(n)
#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int a=0,n=0,y=1;
      int i,s=0,sum=0;
      int x=1;
      scanf("%d %d",&a,&n);
      for(i=1;i<=n;i++){
          y=a*x;
          s+=y;
          x*=10;
          sum+=s;
      }
      printf("%d",sum);

	  /*********End**********/
       return 0;
	}
