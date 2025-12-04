#include <stdio.h>

// 遞迴尋找最大值
int recursiveMaximum(int arr[], int size) {

    // 遞迴終止條件：陣列只剩一個元素
    if (size == 1) {
        return arr[0];
    }

    // 找出「前 size-1 個元素的最大值」
    int maxRest = recursiveMaximum(arr, size - 1);

    // 與最後一個比較後回傳較大的
    return (arr[size - 1] > maxRest) ? arr[size - 1] : maxRest;
}

int main() {
    int arr[] = {3, 8, 15, 2, 9, 27, 14};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxValue = recursiveMaximum(arr, size);

    printf("Maximum value in array = %d\n", maxValue);

    return 0;
}

