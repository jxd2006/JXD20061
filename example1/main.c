//例1：设计一个学生成绩管理系统，能够实现学生成绩的录入、查询、统计（如求平均分、最高分、最低分）、排序等功能。
//需要定义合适的结构体来存储学生信息（包括学号、姓名、各科成绩等），并使用函数来实现各个功能模块，通过主函数进行整体的控制和调用。

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char id[20];  //学号
    char name[50];  //姓名
    float scores[3];  //三门课程成绩
}Student;

void inputStudent(Student *students,int num);//输入学生信息
void printStudent(Student student);//打印单个学生信息
void queryStudent(Student *students,int num);//查询学生信息
void statistics(Student *students,int num);//成绩统计
void sortStudents(Student *students,int num);//对学生按成绩排序

int main(){
    int num;
    printf("请输入学生的数量：");
    scanf("%d",&num);
    Student *students=(Student*)malloc(num *sizeof(Student));
    if(students==NULL){
        printf("内存分配失败！\n");
        return 1;
    }
    intputStudents(students,num);
    queryStudent(students,num);
    statistics(students,num);
    sortStudents(students,num);

    free(students);
    return 0;
}

void inputStudents(Student *students,int num){
    for(int i=0;i<num;i++){
        printf("请输入第%d个学生的学号:",i+1);
        scanf("%s",students[i].id);
        printf("请输入第%d个学生的姓名:",i+1);
        scanf("%s",students[i].name);
        printf("请输入第%d个学生的三门成绩（用空格隔开）：",i+1);
        scanf("%f%f%f",&students[i].scores[0],&students[i].scores[1],&students[i].scores[2]);
    }
}

void printStudent(Student student){
    printf("学号:%s\n",student.id);
    printf("姓名:%s\n",student.name);
    printf("成绩:%.2f%.2f%.2f\n",&students[i].scores[0],&students[i].scores[1],&students[i].scores[2]);
}

void queryStudent(Student *students,int num){
    char searchId[20];
    printf("请输入要查询的学生学号:");
    scanf("%s",searchId);;
    for(int i=0;i<num;i++){
        if(strcmp(students[i].id,searchId)==0){
            printfStudent(students[i]);
            break;
        }
    }
}

void statistics(Student *students,int num){
    float sum_scores[3]={0};
    float max_scores[3]={&students[0].scores[0],&students[0].scores[1],&students[0].scores[2]};
    float max_scores[3]={&students[0].scores[0],&students[0].scores[1],&students[0].scores[2]};
    for(int i=0;i<num;i++){
        for(int j=0;j<3;j++){
            sum_scores[j]+=students[i].scores[j];
            if(students[i].scores[j]>max_scores[j]){
                max_scores[j]=students[i].scores[j];
            }
            if(students[i].scores[j]<min_scores[j]){
                min_scores[j]=students[i].scores[j];
            }
        }
    }
    printf("各科平均分:");
    for(int j=0;j<3;j++){
        printf("%.2f",sum_scores[j]/num);
    }
    printf("\n");
    printf("各科最高分:");
    for(int j=0;j<3;j++){
        printf("%.2f",max_scores[j]);
    }
    printf("\n");
    printf("各科最低分:");
    for(int j=0;j<3;j++){
        printf("%.2d",min_scores[j]);
    }
    printf("\n");
}

void sortStudents(Student *students,int num){
    for(int i=0;i<num-1;i++){
        int max_index=i;
        for(int j=i+1;j<num;j++){
            float sum_i=0,sum_j=0;
            for(int k=0;k<3;k++){
                sum_i+=students[i].scores[k];
                sum_j+=students[j].scores[k];
            }
            if(sum_j>sum_i){
                max_index=j;
            }
        }
        if(max_index!=i){
            Student temp=students[i];
            students[i]=students[max_index];
            students[max_index]=temp;
        }
    }
    printf("按照总分排序后的学生信息如下:\n");
    for(int i=0;i<num;i++){
        printfStudent(students[i]);
    }
}
