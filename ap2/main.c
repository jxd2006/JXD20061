//求阶乘之和
#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int k;
    int n=0;
      long sum=0,sn=1;
      scanf("%d",&n);
      if(n>=0){
          for(k=1;k<=n;k++){
            sn*=k;
            sum+=sn;
          }
      } 
      else{
        sum=0;
      }
      printf("%ld",sum);
	  /*********End**********/
       return 0;
	}
