#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 初始化随机数生成器
    srand(time(NULL));

    // 生成一个1到6之间的随机数，模拟投骰子的结果
    int dice = rand() % 6 + 1;

    // 输出投出的点数
    printf("%d\n", dice);

    // 判断点数是单数还是双数，并输出结果
    if (dice % 2 == 0) {
        printf("win\n");
    } else {
        printf("lose\n");
    }

    return 0;
}
