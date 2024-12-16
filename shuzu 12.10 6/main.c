#include <stdio.h>
int main()
{
    int i,j,M=0,N=0;
    scanf("%d %d",&M,&N);
    int a[M][N],b[N][M];
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%d",b[i][j]);
            if(j<M-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
