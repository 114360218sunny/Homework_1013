#include <stdlib.h>
#include <stdio.h>

// �ŧi��J���ܼƻP�Ȧs�ܼ� temp
int num1;
int num2;
int num3;
int temp; // �Ψӧ�̤j�P�̤p

int main(void) {

    // ���ܨϥΪ̿�J
    puts("�п�J�T�Ӿ��\n");
    // Ū���ϥΪ̿�J���T�Ӿ��
    scanf_s("%d", &num1);
    scanf_s("%d", &num2);
    scanf_s("%d", &num3);

    // �P�_�̤j��
    temp = num1; // �����] num1 �O�̤j

    if (num2 > temp) {
        temp = num2;
    }

    if (num3 > temp) {
        temp = num3;  //����temp���̤j��
    }

    printf("\n�z��J���T�ӼƬO�G%d, %d, %d\n", num1, num2, num3);
    printf("�̤j�ȬO: %d\n", temp);

    // �P�_�̤p��
    temp = num1; // ���] temp �� num1�A�o����@�̤p�Ȩӥ�

    if (num2 < temp) {
        temp = num2;
    }

    if (num3 < temp) {
        temp = num3;
    }

    // ��X�̤p��
    printf("�̤p�ȬO: %d\n", temp);

    return 0;
}
