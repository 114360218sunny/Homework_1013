#include <stdio.h>

int num1;
int num2;

int main(void)
{
    puts("�п�J��Ӽ�");
    scanf_s("%d", &num1);
    scanf_s("%d", &num2);

    if ((num1 % num2) == 0) {
        puts("�Ĥ@�Ƭ��ĤG�ƪ�����");
    }
    else {
        puts("�Ĥ@�Ƥ��O�ĤG�ƪ�����");
    }

    return 0;
}