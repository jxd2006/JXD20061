#include<stdio.h>
#include<string.h>
int main()
{
    int N=0;
    while(scanf("%d",&N)==1){
        int M=N,i=0,count=0;
        do{
                count++;
                M/=2;
        }while(M!=0);
        int* arr;
        arr=(int*)malloc(count*sizeof(int));
        for(i=count-1;i>=0;i--){
            arr[i]=N%2;
            N/=2;
        }
        for(i=0;i<count;i++){
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    return 0;
}



