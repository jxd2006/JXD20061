//例2：某教学平台，会在后台记录学生登录学习系统的相关信息，期中包含最近两次的日期，
//信息保存在一个文本文件test.txt中，如：
//张三 0017 term023 2024.10.9 2024.10.15
//表示的信息分别是：姓名，学生编号，登录的机器号，日期1，日期2，数据项间用空格进行了区分。
//现要求编写程序：
//（1）读取文件中的内容并按学生编号的顺序打印输出所有学生信息。
//（2）对学生信息进行处理，如发现学生最近两次登录时间间隔超过15天，则打印他的名单及两次登录间隔的天数。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义结构体来存储学生信息
typedef struct Student {
    char name[50];
    char id[20];
    char machine_num[20];
    char date1[11];
    char date2[11];
} Student;

// 比较两个学生结构体中编号大小，用于排序
int compareById(const void *a, const void *b) {
    return strcmp(((Student *)a)->id, ((Student *)b)->id);
}

// 判断是否为闰年
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100!= 0) || (year % 400 == 0))
        return 1;
    return 0;
}

// 计算两个日期之间的天数间隔
int daysBetween( char *date1, char *date2) { //设date1早于date2
    int year1, month1, day1;
    int year2, month2, day2;
    int year,month,totalDays=0;
    int days[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    sscanf(date1, "%d.%d.%d", &year1, &month1, &day1); //从字符串中格式化读取日期中的年，月，日
    sscanf(date2, "%d.%d.%d", &year2, &month2, &day2);

    if(year1<year2){
        for (month = month1; month< 13; month++) {
            totalDays += days[month];
            if (month == 2 && isLeapYear(year2))
                totalDays++;
        }
        //累加年份之间的天数
        for ( year = year1+1; year < year2; year++) {
            totalDays += 365;
            if (isLeapYear(year))
                totalDays++;
        }
        // 累加月份之间的天数
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
    Student students[100];  // 假设最多有100个学生信息，可根据实际情况调整大小
    int i,num_students = 0;

    // 1. 打开文件读取内容
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        perror("无法打开文件");
        return 1;
    }

    char line[200];
    while (fgets(line, sizeof(line), fp)!= NULL) {
        //用格式化输入函数sscanf()（这是一个库函数）从字符串中读
        sscanf(line, "%s %s %s %s %s", students[num_students].name, students[num_students].id,
               students[num_students].machine_num, students[num_students].date1, students[num_students].date2);
        num_students++;
    }
    fclose(fp);

    // 2. 按学生编号排序
    qsort(students, num_students, sizeof(Student), compareById);

    // 3. 按顺序打印所有学生信息
    printf("按学生编号排序后的学生信息如下：\n");
    for (i = 0; i < num_students; i++) {
        printf("%20s %20s %20s %20s %20s\n", students[i].name, students[i].id, students[i].machine_num,students[i].date1, students[i].date2);
    }

    // 4. 判断并打印登录时间间隔超过15天的学生名单
    printf("\n登录时间间隔超过15天的学生名单：\n");
    for (i = 0; i < num_students; i++) {
        int interval = daysBetween(students[i].date1, students[i].date2);
        if (interval > 15) {
            printf("%s  %d\n", students[i].name,interval);
        }
    }

    return 0;
}
