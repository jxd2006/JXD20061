#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j;
    char ch;
    while(scanf("%d %c",&N,&ch)==2){
    for(i=1;i<=N;i++){
        for(j=1;j<=(2*i-1);j++)
            printf("%c",ch);
            printf("\n");

    }
    for(i=N-1;i>=0;i--){
        for(j=1;j<=(2*i-1);j++)
            printf("%c",ch);
            printf("\n");

    }
    }
    return 0;
}
