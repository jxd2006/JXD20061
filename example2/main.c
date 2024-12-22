//��2��ĳ��ѧƽ̨�����ں�̨��¼ѧ����¼ѧϰϵͳ�������Ϣ�����а���������ε����ڣ�
//��Ϣ������һ���ı��ļ�test.txt�У��磺
//���� 0017 term023 2024.10.9 2024.10.15
//��ʾ����Ϣ�ֱ��ǣ�������ѧ����ţ���¼�Ļ����ţ�����1������2����������ÿո���������֡�
//��Ҫ���д����
//��1����ȡ�ļ��е����ݲ���ѧ����ŵ�˳���ӡ�������ѧ����Ϣ��
//��2����ѧ����Ϣ���д����緢��ѧ��������ε�¼ʱ��������15�죬���ӡ�������������ε�¼�����������

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����ṹ�����洢ѧ����Ϣ
typedef struct Student {
    char name[50];
    char id[20];
    char machine_num[20];
    char date1[11];
    char date2[11];
} Student;

// �Ƚ�����ѧ���ṹ���б�Ŵ�С����������
int compareById(const void *a, const void *b) {
    return strcmp(((Student *)a)->id, ((Student *)b)->id);
}

// �ж��Ƿ�Ϊ����
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100!= 0) || (year % 400 == 0))
        return 1;
    return 0;
}

// ������������֮����������
int daysBetween( char *date1, char *date2) { //��date1����date2
    int year1, month1, day1;
    int year2, month2, day2;
    int year,month,totalDays=0;
    int days[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    sscanf(date1, "%d.%d.%d", &year1, &month1, &day1); //���ַ����и�ʽ����ȡ�����е��꣬�£���
    sscanf(date2, "%d.%d.%d", &year2, &month2, &day2);

    if(year1<year2){
        for (month = month1; month< 13; month++) {
            totalDays += days[month];
            if (month == 2 && isLeapYear(year2))
                totalDays++;
        }
        //�ۼ����֮�������
        for ( year = year1+1; year < year2; year++) {
            totalDays += 365;
            if (isLeapYear(year))
                totalDays++;
        }
        // �ۼ��·�֮�������
        for (month = 1; month < month2; month++) {
            totalDays += days[month];
            if (month == 2 && isLeapYear(year2))
                totalDays++;
        }
    }
    else{
        for (month = month1; month < month2; month++) {
            totalDays += days[month];
            if (month == 2 && isLeapYear(year2))
                totalDays++;
        }
    }
    totalDays += (day2 - day1);
    return totalDays;
}

int main() {
    FILE *fp;
    Student students[100];  // ���������100��ѧ����Ϣ���ɸ���ʵ�����������С
    int i,num_students = 0;

    // 1. ���ļ���ȡ����
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        perror("�޷����ļ�");
        return 1;
    }

    char line[200];
    while (fgets(line, sizeof(line), fp)!= NULL) {
        //�ø�ʽ�����뺯��sscanf()������һ���⺯�������ַ����ж�
        sscanf(line, "%s %s %s %s %s", students[num_students].name, students[num_students].id,
               students[num_students].machine_num, students[num_students].date1, students[num_students].date2);
        num_students++;
    }
    fclose(fp);

    // 2. ��ѧ���������
    qsort(students, num_students, sizeof(Student), compareById);

    // 3. ��˳���ӡ����ѧ����Ϣ
    printf("��ѧ�����������ѧ����Ϣ���£�\n");
    for (i = 0; i < num_students; i++) {
        printf("%20s %20s %20s %20s %20s\n", students[i].name, students[i].id, students[i].machine_num,students[i].date1, students[i].date2);
    }

    // 4. �жϲ���ӡ��¼ʱ��������15���ѧ������
    printf("\n��¼ʱ��������15���ѧ��������\n");
    for (i = 0; i < num_students; i++) {
        int interval = daysBetween(students[i].date1, students[i].date2);
        if (interval > 15) {
            printf("%s  %d\n", students[i].name,interval);
        }
    }

    return 0;
}
