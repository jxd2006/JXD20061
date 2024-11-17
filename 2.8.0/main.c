#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int m=0,j=0,count=0,score=100;
        int a,c,e;
        char b,d;
        float result=0;
        scanf("%d",&m);
        score/=m;
        for(j=0;j<m;j++){
            scanf("%d%c%d%c%d",&a,&b,&c,&d,&e);
            if(b=='+'){
                if(e==a+c)
                    count++;
            }
            if(b=='-'){
                if(e==a-c)
                    count++;
            }
            if(b=='*'){
                if(e==a*c)
                    count++;
            }
            if(b=='/'){
                if(c==0){
                    ;
                }
                else if(e==a/c)
                    count++;
            }
        }
            result = score * count;
            printf("%.2f\n",result);
    }


    return 0;
}
