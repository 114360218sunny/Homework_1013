#include <stdlib.h>
#include <stdio.h>

// �ŧi��J���ܼƻP�Ȧs�ܼ�
int num1;
int temp;

int main(void) {

    // ���ܨϥΪ̿�J
    puts("�п�J�@�Ӿ��\n");
    scanf_s("%d", &num1);

    // �P�_�_��
    temp = num1 % 2;

    if (temp == 0) {
        puts("�A��J���Ʀr������");
    }
    else {
        puts("�A��J���Ʀr���_��");
    }

    return 0;
}
