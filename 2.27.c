#include <stdio.h>

int main(void) {
    int i, j, space;
    int height = 5;

    for (i = 0; i < height; i++) {
        // �Ů�
        for (space = 0; space < height - i - 1; space++) {
            printf(" ");
        }

        // �L�P��
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}