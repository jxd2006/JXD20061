#include <stdio.h>

// 计算星期几的函数
int getWeek(int day) {
    /**********Begin**********/
    int year, month, dayOfMonth;
    year = day / 10000;
    month = (day % 10000) / 100;
    dayOfMonth = day % 100;

    // Zeller公式计算星期几
    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }
    int k = year % 100; // 年份的后两位
    int j = year / 100; // 世纪数减去1
    int h = (dayOfMonth + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    // 调整结果，使得0代表星期六，1代表星期日，以此类推
    int week = ((h + 5) % 7) + 1;
    return week;
    /**********End**********/
}

// 打印星期几的函数
void printWeek(int w) {
    /**********Begin**********/
    const char* weekDays[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    // 打印星期几的英文缩写
    printf("%s\n", weekDays[w - 1]);
    /**********End**********/
}

int main() {
    int date;
    scanf("%d", &date);
    int week = getWeek(date);
    printWeek(week);
    return 0;
}
