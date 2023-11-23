#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(2 * n * sizeof(int));

    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, 2 * n, sizeof(int), compare);

    int min = 1000000000;
    for (int i = 0; i < n; i++) {
        int diff = abs(arr[i] - arr[i + n]);
        if (diff < min) {
            min = diff;
        }
    }

    printf("%d", min);

    // 동적으로 할당된 배열 메모리 해제
    free(arr);

    return 0;
}