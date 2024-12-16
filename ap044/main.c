#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int r=0,a=0;
    float sum=0,k=0;
      scanf("%d,%f",&r,&k);
      if(r<0||r>4)
      {
          printf("Error in Area\n");
          printf("Price: %.2f\n",sum);
      }
      else if(r==0)
      {
        if(k<=1)
        {
          sum=10;
          printf("Price: %.2f\n",sum);
        }
        else if(k>1)
        {
          a=(int)k/1;
          sum=10+a*3;
          printf("Price: %.2f\n",sum);
        }
      }
      else if(r==1)
      {
        if(k<=1)
        {
          sum=10;
          printf("Price: %.2f\n",sum);
        }
        else if(k>1)
        {
          a=(int)k/1;
          sum=10+a*4;
          printf("Price: %.2f\n",sum);
        }
      }
      else if(r==2)
      {
        if(k<=1)
        {
          sum=15;
          printf("Price: %.2f\n",sum);
        }
       else if(k>1)
        {
          a=(int)k/1;
          sum=15+a*5;
          printf("Price: %.2f\n",sum);
        }
      }
      else if(r==3)
      {
        if(k<=1)
        {
          sum=15;
          printf("Price: %.2f\n",sum);
        }
       else if(k>1)
        {
          a=(int)k/1;
          sum=15+a*6.5;
          printf("Price: %.2f\n",sum);
        }
      }
	  else
      {
        if(k<=1)
        {
          sum=15;
          printf("Price: %.2f\n",sum);
        }
       else if(k>1)
        {
          if((k-(int)k/1)==0)
        {
          a=k-1;
          sum=15+a*10;
          printf("Price: %.2f\n",sum);
        }
        else
        {
          a=(int)k/1;
          sum=15+a*10;
          printf("Price: %.2f\n",sum);
        }
      }
      }
	  /*********End**********/
       return 0;
	}
