#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,c=0,d=0,sum=0;
    while(scanf("%d\n",&a)==1){
        if(a==1){
            b++;
        }
        if(a==2){
            c++;
        }
        if(a==3){
            d++;
        }
    }
    sum=b*1000+c*500+d*200+(b/3)*1000+(c/6)*500+(d/10)*200;
    printf("%d",sum);
    return 0;
}
