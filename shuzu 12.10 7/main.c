#include <stdio.h>
int main()
{
    int i,j,k,M=0,N=0,P=0;
    scanf("%d %d %d",&M,&N,&P);
    int a[M][N],b[N][P],c[M][P];
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<P;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<M;i++){
        for(j=0;j<P;j++){
            c[i][j]=0;
            for(k=0;k<N;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<M;i++){
        for(j=0;j<P;j++){
            printf("%d",c[i][j]);
            if(j<P-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
