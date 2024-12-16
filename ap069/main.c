#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a=1.0,b=1.0,s=1.0;//a作分子，b作分母
    int i,j;
    for(i=1;i<=10;i++){
        a*=i;
        b=1.0;
        for(j=1;j<=2*i+1;j+=2)
        {
            b*=j;
        }
        s+=a/b;
    }
    printf("s=%.3f\n",s);
    return 0;
}
