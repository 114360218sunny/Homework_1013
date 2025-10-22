#include <stdio.h>

int main(void) {
    int i;

    printf("number\tsquare\tcube\n");

    // 從 0 到 10 列出平方與立方
    for (i = 0; i <= 10; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}
