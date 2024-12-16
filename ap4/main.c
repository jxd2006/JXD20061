#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
      char a[100];
      fgets(a,100,stdin);
      int i,b,c,d,e;
      for(i=0;a[i]!='\n';i++){
          if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z'){
              b+=1;
          }
          else if(a[i]>='0'&&a[i]<='9'){
              c+=1;
          }
          else if(a[i]==' '){
              d+=1;
          }
          else {
              e+=1;
          }
      }
      printf("%d %d %d %d",b,c,d,e);

	  /*********End**********/
       return 0;
	}
