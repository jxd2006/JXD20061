//对所有图书按字母顺序由小到大排序输出书名
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
    for(i=0;i<n-1;i++){  //选择排序
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


//行指针数组
//某班有四个学生，学5门课程，每个学生5门课程的成绩及总分已给出
//要求将他们的成绩由高到低排序后输出
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
    printf("序号\t语文\t数学\t物理\t化学\t生物\t总分\n");
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

