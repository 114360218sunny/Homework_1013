#include <stdlib.h>
#include <stdio.h>

// 宣告輸入用變數與暫存變數
int num1;
int temp;

int main(void) {

    // 提示使用者輸入
    puts("請輸入一個整數\n");
    scanf_s("%d", &num1);

    // 判斷奇偶
    temp = num1 % 2;

    if (temp == 0) {
        puts("你輸入的數字為偶數");
    }
    else {
        puts("你輸入的數字為奇數");
    }

    return 0;
}
