//������ͼ�鰴��ĸ˳����С���������������
/*#include <stdio.h>
#include <string.h>
void sort(char *p[],int),prn(char *p[],int);
int main()
{
    char *book[]={"The C Programming Language",
                  "Database Design",
                  "Database System Implementation",
                  "Software Engineering"};
    sort(book,4);
    prn(book,4);
    return 0;
}

void sort(char *p[],int n){
    int i,j,minpost;
    char *t;
    for(i=0;i<n-1;i++){  //ѡ������
        minpost=i;
        for(j=i+1;j<n;j++)
            if(strcmp(p[j],p[minpost])<0)
            minpost=j;
        if(minpost!=i){
            t=p[i]; p[i]=p[minpost]; p[minpost]=t;
        }
    }
}
void prn(char *p[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%s\n",p[i]);
}*/


//��ָ������
//ĳ�����ĸ�ѧ����ѧ5�ſγ̣�ÿ��ѧ��5�ſγ̵ĳɼ����ܷ��Ѹ���
//Ҫ�����ǵĳɼ��ɸߵ�����������
int main()
{
    int score[4][7]={{1,80,82,95,88,93,438},
                     {2,86,54,80,95,57,372},
                     {3,80,70,56,88,82,387},
                     {4,85,89,87,80,96,447}},i,j,(*p[4])[7];
    void sort(int (*p[])[7],int);
    for(i=0;i<4;i++)
        p[i]=score+i;
    sort(p,4);
    printf("���\t����\t��ѧ\t����\t��ѧ\t����\t�ܷ�\n");
    for(i=0;i<4;i++){
        for(j=0;j<7;j++)
            printf("%3d\t",*(*p[i]+j));
        printf("\n");
    }
    return 0;
}

void sort(int (*p[])[7],int n){
    int i,j,post,(*t)[7];
    for(i=0;i<n-1;i++){
        post=i;
        for(j=i+1;j<n;j++)
            if(*(*p[j]+6)>*(*p[post]+6))
            post=j;
        if(post!=i){
            t=p[i]; p[i]=p[post]; p[post]=t;
        }
    }
}

