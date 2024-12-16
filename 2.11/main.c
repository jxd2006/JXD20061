#include <stdio.h>
#include <stdlib.h>
char my_result(int x) {
    if (x==11)
        return 'J';
    else if (x==12)
        return 'Q';
    else if (x==13)
        return 'K';
    else if(x==14)
        return 'A';
}
int main() {
    int N = 0, a = 0, b = 0, c = 0, i, j, k, t;
    int data[3];
    char o, p, z;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d%c %d%c %d%c", &a, &o, &b, &p, &c, &z);
        data[0] = a;
        data[1] = b;
        data[2] = c;
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2 - j; k++) {
                if (data[k] > data[k + 1]) {
                    t = data[k];
                    data[k] = data[k + 1];
                    data[k + 1] = t;
                }
            }
        }
        if (data[0] == data[1] && data[1] == data[2]) {
            if (data[2] < 11 && data[2] > 1)
                printf("Leopard %d\n", data[2]);
            else if (data[2] >= 11 && data[2] <= 14) {
                char result = my_result(data[2]);
                printf("Leopard %c\n", result);
            }
        }
        else if (o == p && p == z && data[2] - data[1] == 1 && data[1] - data[0] == 1) {
            if (data[2] < 11 && data[2] > 1)
                printf("Flush straight %d\n", data[2]);
            else if (data[2] >= 11 && data[2] <= 14) {
                char result = my_result(data[2]);
                printf("Flush straight %c\n", result);
            }
        }
        // 判断是否为顺子（数字连续但花色不全相同）
        else if (data[2] - data[1] == 1 && data[1] - data[0] == 1 && (o!= p || o!= z || p!= z)) {
            if (data[2] < 11 && data[2] > 1)
                printf("Straight %d\n", data[2]);
            else if (data[2] >= 11 && data[2] <= 14) {
                char result = my_result(data[2]);
                printf("Straight %c\n", result);
            }
        }
        else if (o == p && p == z && (data[1]!= data[2] || data[1]!= data[0] || data[2]!= data[0])) {
            if (data[2] < 11 && data[2] > 1)
                printf("Same kind %d\n", data[2]);
            else if (data[2] >= 11 && data[2] <= 14) {
                char result = my_result(data[2]);
                printf("Same kind %c\n", result);
            }
        }
        else if ((data[0] == data[1] && data[0]!= data[2]) || (data[0] == data[2] && data[0]!= data[1]) ||
                 (data[1] == data[2] && data[1]!= data[0])) {
            if (data[0]==data[1])
            {
                if(data[0]<=10)
                    printf("Pair %d\n",data[0]);
                    else{
                        char result=my_result(data[0]);
                        printf("Pair %c\n",result);
                    }
            }
            if (data[0]==data[2])
            {
                if(data[0]<=10)
                    printf("Pair %d\n",data[0]);
                    else{
                        char result=my_result(data[0]);
                        printf("Pair %c\n",result);
                    }
            }
            if (data[1]==data[2])
            {
                if(data[1]<=10)
                    printf("Pair %d",data[1]);
                    else{
                        char result=my_result(data[1]);
                        printf("Pair %c\n",result);
                    }
            }
        }
        // 判断是否为散牌（数字和花色都不全相同）
        else if (data[0]!= data[1] && data[0]!= data[2] && data[1]!= data[2] && (o!= p || o!= z || p!= z)) {
            if (data[2] < 11 && data[2] > 1)
                printf("General %d\n", data[2]);
            else if (data[2] >= 11 && data[2] <= 14) {
                char result = my_result(data[2]);
                printf("General %c\n", result);
            }
        }
    }
    return 0;
}





















