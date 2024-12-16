#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n, int order) {
    int i, j, post;
    for (i = 0; i < n - 1; i++) {
        post = i;
        for (j = i + 1; j < n; j++) {
            if ((order == 0 && arr[j] < arr[post]) || (order != 0 && arr[j] > arr[post])) {
                post = j;
            }
        }
        if (post != i) {
            swap(&arr[i], &arr[post]);
        }
    }
}

int main() {
    int N = 0;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    sort(A, N, 0);
    for (int i = 0; i < N; i++) {
        printf("%d", A[i]);
        if (i < N - 1)
            printf(" ");
    }
    return 0;
}
