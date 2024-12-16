#include<stdio.h>
#define N 5
#define S 30
int main()
{
    int i,j;
    for(i=1;i<=N;i++){
        for(j=1;j<=S+i-1;j++){
            putchar(' ');
        }
        for(j=1;j<=2*(N+1-i)-1;j++){
            putchar('A'+j-1);
        }
        printf("\n");
    }
    return 0;
}
