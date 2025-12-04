#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000

int main() {
    int freq[13] = {0};  // index 0~12ㄤい 2~12 ㄏノ
    int die1, die2, sum;

    srand(time(NULL)); // 砞﹚睹计贺

    for (int i = 0; i < ROLLS; i++) {
        die1 = rand() % 6 + 1; // 1~6
        die2 = rand() % 6 + 1; // 1~6
        sum = die1 + die2;     // 2~12
        freq[sum]++;
    }

    printf("翴计\t瞷Ω计\n");
    printf("-----------------\n");
    for (int i = 2; i <= 12; i++) {
        printf("%2d\t%5d\n", i, freq[i]);
    }

    // 瞶┦浪琩ゑㄒ
    printf("\n瞶┦耞瞷ゑㄒ\n");
    printf("-------------------------\n");
    for (int i = 2; i <= 12; i++) {
        printf("翴计 %2d: %.4f%%\n", i, (freq[i] * 100.0 / ROLLS));
    }

    return 0;
}

