#include <stdio.h>

int main(void) {
    int i;

    printf("number\tsquare\tcube\n");

    // �q 0 �� 10 �C�X����P�ߤ�
    for (i = 0; i <= 10; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}
