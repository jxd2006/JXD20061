#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a, int b, int c, int d) {
    int maxNum = 1000 * a + 100 * b + 10 * c + d;
    int temp;
    int num = a * 1000 + b * 100 + c * 10 + d;
    int arr[4] = {a, b, c, d};

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr[3] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[0];
}

int min(int a, int b, int c, int d) {
    int minNum = 1000 * a + 100 * b + 10 * c + d;
    int temp;
    int num = a * 1000 + b * 100 + c * 10 + d;
    int arr[4] = {a, b, c, d};

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
}

int diff(int maxNum, int minNum, int a, int b, int c, int d) {
    return maxNum - minNum;
}
int max(int a,int b,int c,int d);
int min(int a,int b,int c,int d);
int diff(int a,int b,int c,int d);
int main()
{
    int num,a,b,c,d,count=0;
    scanf("%d",&num);
    a=num/1000;
    b=num%1000/100;
    c=num%100/10;
    d=num%10;
    while(1){
            count++;
            printf("第%d次：%d%d%d%d\n",count,a,b,c,d);
        int result=diff(max(a,b,c,d),min(a,b,c,d),a,b,c,d);
        a=result/1000;
        b=result%1000/100;
        c=result%100/10;
        d=result%10;
    }
    if(a==6&&b==1&&c==7&&d==4){
        printf("已达到6174\n");
    }
    if(count>7){
        pirntf("该数字不满足6174黑洞问题。\n");
    }
    return 0;
}
