#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  float i,b=1;
      float sum1=0,sum=0;
      for(i=1;i<=100;i++){
          sum1+=b/i;
          b=-b;
      }
      sum=sum1;
      printf("%.3f",sum);

	  /*********End**********/
       return 0;
	}
