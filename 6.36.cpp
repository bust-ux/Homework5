#include <stdio.h>

// 遞迴反向列印字串
void stringReverse(const char s[]) {
    // 遞迴終止：遇到字串結束符號 '\0'
    if (*s == '\0') {
        return;
    }

    // 遞迴呼叫下一個字元
    stringReverse(s + 1);

    // 在遞迴結束之後印出字元（回溯時印）
    putchar(*s);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);   

    printf("Reversed string: ");
    stringReverse(str);

    printf("\n");

    return 0;
}

