#include <stdio.h>
int main()
{
    int i,j,M=0,N=0;
    int max=-2147483648;
    int min=2147483647;
    scanf("%d %d",&M,&N);
    int a[M][N];
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
             scanf("%d",&a[i][j]);
             if(a[i][j]>max){
                 max=a[i][j];
             }
             if(a[i][j]<min){
                 min=a[i][j];
             }
        }
    }
    int height=max-min;
    printf("%d\n",height);
    return 0;
}
