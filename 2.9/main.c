#include <stdio.h>
#include <string.h>

#define MAX_BINARY_LENGTH 33 // 2^30 的二进制表示最多需要31位（包括前导0），再加2位用于换行符和字符串结束符

int main() {
    int number;
    char binary[MAX_BINARY_LENGTH];

    // 读取输入直到遇到文件结束符
    while (scanf("%d", &number) != EOF) {
        int index = 0;

        // 特殊情况，当输入为0时
        if (number == 0) {
            printf("0\n");
            while (getchar() != '\n'); // 清除缓冲区直到行尾
            continue;
        }

        // 将整数转换为二进制字符串
        while (number > 0) {
            binary[index++] = (number & 1) + '0'; // 获取最低位并转换为字符
            number >>= 1; // 右移一位
        }
        binary[index] = '\0'; // 添加字符串结束符

        // 反转二进制字符串
        int start = 0;
        int end = index - 1;
        while (start < end) {
            char temp = binary[start];
            binary[start] = binary[end];
            binary[end] = temp;
            start++;
            end--;
        }

        // 输出二进制序列
        printf("%s\n", binary);

        // 清除缓冲区直到下一个整数或行尾
        while (getchar() != '\n' && getchar() != EOF);
    }

    return 0;
}
