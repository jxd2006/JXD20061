#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,t;
   int a[11]={0,8,3,20,-4,15,-20,6,50,24,8};
   for(i=2;i<=10;i++)
    for(j=i;j>1;j--)
   if(a[j-1]>a[j]){
    t=a[j];  a[j]=a[j-1];  a[j-1]=t;
   }
   else break;
   for(i=1;i<=10;i++)
    printf("%d  ",a[i]);
    return 0;
}
