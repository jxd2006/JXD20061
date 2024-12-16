#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int k,n=0;
      long sum=0,sn=1;
      scanf("%d",&n);
      if(n>0){
          for(k=1;k<=n;k++){
            sn*=k;
            sum+=sn;
          }
        printf("%ld\n",sum);
      }
      else if(n==0){
        sum=1;
          printf("%ld\n",sum);
      }
      else{
        sum=0;
        printf("%ld\n",sum);
      }
	  /*********End**********/
       return 0;
	}
