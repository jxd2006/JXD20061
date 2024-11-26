#include <stdio.h>

// ��������
int calculate(char op, int a, int b);
int factorial(int n);

int main() {
    char op;
    int a, b;
    int result;

    // ѭ����ȡ����ֱ�������ļ�������EOF
    while (scanf("%d %c", &a, &op) != EOF) {
        if (op == '!') {
            // �׳�����
            result = factorial(a);
            printf("%d\n", result);
            continue;
        }
        // ��ȡ�ڶ�������
        scanf("%d", &b);
        switch (op) {
            case '+':
                result = calculate(op, a, b);
                break;
            case '-':
                result = calculate(op, a, b);
                break;
            case '*':
                result = calculate(op, a, b);
                break;
            case '/':
                if (b == 0) {
                    printf("error\n");
                    continue;
                }
                result = calculate(op, a, b);
                break;
            case '%':
                if (b == 0) {
                    printf("error\n");
                    continue;
                }
                result = calculate(op, a, b);
                break;
            default:
                printf("error\n");
                continue;
        }
        printf("%d\n", result);
    }
    return 0;
}

// ���㺯��
int calculate(char op, int a, int b) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '%':
            return a % b;
        default:
            return 0; // ��Ӧ�õ�������
    }
}

// �׳˺���
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
