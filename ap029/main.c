#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000]; // ����������ַ���������999���ַ�
    FILE *file;

    // ��ʾ�û������ַ���
    printf("������һ���ַ�����");
    fgets(str, sizeof(str), stdin); // ʹ��fgets��ȡ�ַ����������ո�

    // ���ļ���׼��д��
    file = fopen("output.txt", "w"); // ��д��ģʽ���ļ�
    if (file == NULL) {
        perror("�ļ���ʧ��");
        return EXIT_FAILURE;
    }

    // �����ַ���������ÿ���ַ�д���ļ�
    for (int i = 0; str[i] != '\0'; i++) {
        fprintf(file, "%c\n", str[i]); // д���ַ�������
    }

    // �ر��ļ�
    fclose(file);

    printf("�ַ�����д���ļ�output.txt��\n");

    return EXIT_SUCCESS;
}
