#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int a,b,c,d;
      float e;
      printf("Enter item number:\n");
      printf("Enter unit price:\n");
      printf("Enter purchase date(mm/dd/yy):\n");
      printf("Item Unit Purchase\n");
      scanf("%d\n",&a);
      scanf("%f\n",&e);
      scanf("%d/%d/%d",&b,&c,&d);
      printf("%-9d$ %-9.2f%02d%02d%02d\n",a,e,b,c,d);


	  /*********End**********/
       return 0;
	}
