#include <stdio.h>
#define SIZE 15

int recursiveBinarySearch(int array[], int low, int high, int key);

int main(void) {
    int a[SIZE]; 
    int i, searchKey, result;

    for (i = 0; i < SIZE; i++) {
        a[i] = 2 * i; 
    }

    printf("Enter a number to search for: ");
    scanf("%d", &searchKey);

    result = recursiveBinarySearch(a, 0, SIZE - 1, searchKey);

    if (result != -1) {
        printf("Found %d at index %d.\n", searchKey, result);
    } else {
        printf("%d not found in the array.\n", searchKey);
    }

    return 0;
}

//--------------------------------------
//  遞迴 Binary Search
//  array[]：搜尋的陣列
//  low：開始位置
//  high：結束位置
//  key：搜尋目標
//--------------------------------------
int recursiveBinarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        return -1;  // 搜尋失敗
    }

    int mid = (low + high) / 2;

    if (array[mid] == key) {
        return mid;  // 找到
    } 
    else if (key < array[mid]) {
        return recursiveBinarySearch(array, low, mid - 1, key);
    } 
    else {
        return recursiveBinarySearch(array, mid + 1, high, key);
    }
}

