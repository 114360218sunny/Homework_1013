#include <stdlib.h>
#include <stdio.h>

// 块ノ跑计籔既跑计 temp
int num1;
int num2;
int num3;
int temp; // ノㄓт程籔程

int main(void) {

    // 矗ボㄏノ块
    puts("叫块俱计\n");
    // 弄ㄏノ块俱计
    scanf_s("%d", &num1);
    scanf_s("%d", &num2);
    scanf_s("%d", &num3);

    // 耞程
    temp = num1; // 安砞 num1 琌程

    if (num2 > temp) {
        temp = num2;
    }

    if (num3 > temp) {
        temp = num3;  //temp程
    }

    printf("\n眤块计琌%d, %d, %d\n", num1, num2, num3);
    printf("程琌: %d\n", temp);

    // 耞程
    temp = num1; // 砞 temp  num1硂Ω讽程ㄓノ

    if (num2 < temp) {
        temp = num2;
    }

    if (num3 < temp) {
        temp = num3;
    }

    // 块程
    printf("程琌: %d\n", temp);

    return 0;
}
