#include <stdio.h>
#include <string.h>

#define MAX_BINARY_LENGTH 33 // 2^30 �Ķ����Ʊ�ʾ�����Ҫ31λ������ǰ��0�����ټ�2λ���ڻ��з����ַ���������

int main() {
    int number;
    char binary[MAX_BINARY_LENGTH];

    // ��ȡ����ֱ�������ļ�������
    while (scanf("%d", &number) != EOF) {
        int index = 0;

        // ���������������Ϊ0ʱ
        if (number == 0) {
            printf("0\n");
            while (getchar() != '\n'); // ���������ֱ����β
            continue;
        }

        // ������ת��Ϊ�������ַ���
        while (number > 0) {
            binary[index++] = (number & 1) + '0'; // ��ȡ���λ��ת��Ϊ�ַ�
            number >>= 1; // ����һλ
        }
        binary[index] = '\0'; // ����ַ���������

        // ��ת�������ַ���
        int start = 0;
        int end = index - 1;
        while (start < end) {
            char temp = binary[start];
            binary[start] = binary[end];
            binary[end] = temp;
            start++;
            end--;
        }

        // �������������
        printf("%s\n", binary);

        // ���������ֱ����һ����������β
        while (getchar() != '\n' && getchar() != EOF);
    }

    return 0;
}
