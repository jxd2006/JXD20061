//��1�����һ��ѧ���ɼ�����ϵͳ���ܹ�ʵ��ѧ���ɼ���¼�롢��ѯ��ͳ�ƣ�����ƽ���֡���߷֡���ͷ֣�������ȹ��ܡ�
//��Ҫ������ʵĽṹ�����洢ѧ����Ϣ������ѧ�š����������Ƴɼ��ȣ�����ʹ�ú�����ʵ�ָ�������ģ�飬ͨ����������������Ŀ��ƺ͵��á�

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char id[20];  //ѧ��
    char name[50];  //����
    float scores[3];  //���ſγ̳ɼ�
}Student;

void inputStudent(Student *students,int num);//����ѧ����Ϣ
void printStudent(Student student);//��ӡ����ѧ����Ϣ
void queryStudent(Student *students,int num);//��ѯѧ����Ϣ
void statistics(Student *students,int num);//�ɼ�ͳ��
void sortStudents(Student *students,int num);//��ѧ�����ɼ�����

int main(){
    int num;
    printf("������ѧ����������");
    scanf("%d",&num);
    Student *students=(Student*)malloc(num *sizeof(Student));
    if(students==NULL){
        printf("�ڴ����ʧ�ܣ�\n");
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
        printf("�������%d��ѧ����ѧ��:",i+1);
        scanf("%s",students[i].id);
        printf("�������%d��ѧ��������:",i+1);
        scanf("%s",students[i].name);
        printf("�������%d��ѧ�������ųɼ����ÿո��������",i+1);
        scanf("%f%f%f",&students[i].scores[0],&students[i].scores[1],&students[i].scores[2]);
    }
}

void printStudent(Student student){
    printf("ѧ��:%s\n",student.id);
    printf("����:%s\n",student.name);
    printf("�ɼ�:%.2f%.2f%.2f\n",&students[i].scores[0],&students[i].scores[1],&students[i].scores[2]);
}

void queryStudent(Student *students,int num){
    char searchId[20];
    printf("������Ҫ��ѯ��ѧ��ѧ��:");
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
    printf("����ƽ����:");
    for(int j=0;j<3;j++){
        printf("%.2f",sum_scores[j]/num);
    }
    printf("\n");
    printf("������߷�:");
    for(int j=0;j<3;j++){
        printf("%.2f",max_scores[j]);
    }
    printf("\n");
    printf("������ͷ�:");
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
    printf("�����ܷ�������ѧ����Ϣ����:\n");
    for(int i=0;i<num;i++){
        printfStudent(students[i]);
    }
}
