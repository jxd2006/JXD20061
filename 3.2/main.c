#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // ��ʼ�������������
    srand(time(NULL));

    // ����һ��1��6֮����������ģ��Ͷ���ӵĽ��
    int dice = rand() % 6 + 1;

    // ���Ͷ���ĵ���
    printf("%d\n", dice);

    // �жϵ����ǵ�������˫������������
    if (dice % 2 == 0) {
        printf("win\n");
    } else {
        printf("lose\n");
    }

    return 0;
}
