#include<stdio.h>
int main()
{
    int N,b[4],i,j,k=0,l=0,total=0;
    scanf("%d",&N);
    while(1){
        for(i=0;i<4;i++){
            b[i]=N%10;
            N/=10;
        }
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(b[j]>b[j+1]){
                    int temp=b[j];
                    b[j]=b[j+1];
                    b[j+1]=temp;
                }
            }
            }
            k=b[3]*1000+b[2]*100+b[1]*10+b[0];
            l=b[0]*1000+b[1]*100+b[2]*10+b[3];
            total=k-l;
            if(b[0]==0)
            printf("%d-0%d=%d\n",k,l,total);
            else
            printf("%d-%d=%d\n",k,l,total);
            if(total==6174)
            break;
            else{
                N=total;
            }
        }

    return 0;
}




