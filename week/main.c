#include <stdio.h>

// �������ڼ��ĺ���
int getWeek(int day) {
    /**********Begin**********/
    int year, month, dayOfMonth;
    year = day / 10000;
    month = (day % 10000) / 100;
    dayOfMonth = day % 100;

    // Zeller��ʽ�������ڼ�
    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }
    int k = year % 100; // ��ݵĺ���λ
    int j = year / 100; // ��������ȥ1
    int h = (dayOfMonth + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    // ���������ʹ��0������������1���������գ��Դ�����
    int week = ((h + 5) % 7) + 1;
    return week;
    /**********End**********/
}

// ��ӡ���ڼ��ĺ���
void printWeek(int w) {
    /**********Begin**********/
    const char* weekDays[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    // ��ӡ���ڼ���Ӣ����д
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
