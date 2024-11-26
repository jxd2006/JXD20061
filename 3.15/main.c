#include <stdio.h>

// 函数声明
int calculate(char op, int a, int b);
int factorial(int n);

int main() {
    char op;
    int a, b;
    int result;

    // 循环读取输入直到遇到文件结束符EOF
    while (scanf("%d %c", &a, &op) != EOF) {
        if (op == '!') {
            // 阶乘运算
            result = factorial(a);
            printf("%d\n", result);
            continue;
        }
        // 读取第二个整数
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

// 计算函数
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
            return 0; // 不应该到达这里
    }
}

// 阶乘函数
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
