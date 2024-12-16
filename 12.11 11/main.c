#include <stdio.h>
void swap(int *a,int *b);
void sort(int *arr,int N);
int main()
{
    int N=0;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    sort(A,N);
    for(int i=0;i<N;i++){
    printf("%d",*(A+i));
    if(i<N-1){
        printf(" ");
    }
    }
    printf("\n");
    return 0;
}

void swap(int *a,int *b){
        int t=*a;
        *a=*b;
        *b=t;
}

void sort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            int *p1=arr+j,*p2=arr+j+1;
            if(*p1>*p2){
                swap(p1,p2);
            }
        }
    }
}

