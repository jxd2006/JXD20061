#include <stdio.h>
// ��������
int isLeapYear(int year);
int dayOfYear(int year, int month, int day);
int daysBetweenDates(int year, int month1, int day1, int month2, int day2);

int main() {
    int year, month1, day1, month2, day2;
    scanf("%d %d %d %d %d", &year, &month1, &day1, &month2, &day2);

    // ������������֮���������
    int days = daysBetweenDates(year, month1, day1, month2, day2);
    printf("%d\n", days);

    return 0;
}

// �ж��Ƿ�Ϊ����
int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// ����ĳһ���ǵ���ĵڼ���
int dayOfYear(int year, int month, int day) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) {
        daysInMonth[1] = 29; // ����2����29��
    }
    int sum = 0;
    for (int i = 0; i < month - 1; i++) {
        sum += daysInMonth[i];
    }
    sum += day;
    return sum;
}

// ������������֮���������
int daysBetweenDates(int year, int month1, int day1, int month2, int day2) {
    int day1OfYear = dayOfYear(year, month1, day1);
    int day2OfYear = dayOfYear(year, month2, day2);
    return day2OfYear - day1OfYear;
}































