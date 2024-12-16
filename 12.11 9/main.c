#include <stdio.h>
void Print(int N){
    int a[N][N],num=1,i,j;
    int top=0,down=N-1,left=0,right=N-1;
    while(num<=N*N){
        for(j=left;j<=right;j++){
            a[top][j]=num++;
        }
        top++;

        for(i=top;i<=down;i++){
            a[i][right]=num++;
        }
        right--;

        for(j=right;j>=left;j--){
            a[down][j]=num++;
        }
        down--;

        for(i=down;i>=top;i--){
            a[i][left]=num++;
        }
        left++;
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%03d",a[i][j]);
            if(j<N-1)
                printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    int N;
    scanf("%d",&N);
    Print(N);
    return 0;
}
