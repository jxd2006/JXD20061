//ѡ������
 #include<stdio.h>
 #define N 10
 int main()
 {
     int data[N+1],i,j,post,t;
     printf("������%d������:\n",N);
     for(i=1;i<=N;i++)
            scanf("%d",&data[i]);
     for(i=1;i<=N-1;i++){
        post=i;
        for(j=i+1;j<=N;j++)
            if(data[j]>data[post])
            post=j;
        if(post!=i){
            t=data[i];data[i]=data[post];data[post]=t;
        }
     }
     printf("���������Ľ��Ϊ��\n");
     for(i=1;i<=N;i++)
        printf("%d  ",data[i]);
     printf("\n");
     return 0;
 }
