#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000]; // 假设输入的字符串不超过999个字符
    FILE *file;

    // 提示用户输入字符串
    printf("请输入一个字符串：");
    fgets(str, sizeof(str), stdin); // 使用fgets读取字符串，包括空格

    // 打开文件，准备写入
    file = fopen("output.txt", "w"); // 以写入模式打开文件
    if (file == NULL) {
        perror("文件打开失败");
        return EXIT_FAILURE;
    }

    // 遍历字符串，并将每个字符写入文件
    for (int i = 0; str[i] != '\0'; i++) {
        fprintf(file, "%c\n", str[i]); // 写入字符并换行
    }

    // 关闭文件
    fclose(file);

    printf("字符串已写入文件output.txt。\n");

    return EXIT_SUCCESS;
}
