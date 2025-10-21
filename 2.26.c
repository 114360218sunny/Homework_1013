#include <stdio.h>

int num1;
int num2;

int main(void)
{
    puts("叫块ㄢ计");
    scanf_s("%d", &num1);
    scanf_s("%d", &num2);

    if ((num1 % num2) == 0) {
        puts("材计材计计");
    }
    else {
        puts("材计ぃ琌材计计");
    }

    return 0;
}