#include <stdio.h>

int main(void) {
    int i, j, space;
    int height = 5;

    for (i = 0; i < height; i++) {
        // 空格
        for (space = 0; space < height - i - 1; space++) {
            printf(" ");
        }

        // 星星
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
