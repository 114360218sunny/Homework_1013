#include <stdio.h>

int main(void) {
    double distance;     // a) �@�Ѧ�p���`���{�]�����^
    double fuelPrice;    // b) �C����/�[�ڪ��T�o����
    double kmPerLiter;   // c) �C���ɥi��p�h�֤����]�U�o�Ĳv�^
    double parkingFee;   // d) �C�鰱���O
    double tollFee;      // e) �C��q��O�]�L���O�^

    // ���ܨϥΪ̿�J�U�����
    puts("�п�J�H�U��T�H�p��z�C��}�����`��O�G");

    printf("a) �@��Ѫ��`���{�ơ]�����^�G");
    scanf_s("%lf", &distance);

    printf("b) �C���ɨT�o������G");
    scanf_s("%lf", &fuelPrice);

    printf("c) �C���ɨT�o�i��p�������ơG");
    scanf_s("%lf", &kmPerLiter);

    printf("d) �@�Ѫ������O�G");
    scanf_s("%lf", &parkingFee);

    printf("e) �@�Ѫ��q��O�]�L���O�^�G");
    scanf_s("%lf", &tollFee);

    // �p��C���O
    double fuelNeeded = distance / kmPerLiter;
    double fuelCost = fuelNeeded * fuelPrice;
    double totalCost = fuelCost + parkingFee + tollFee;

    // ��ܵ��G
    printf("\n");
    printf("��p�`�Z���G%.2f ����\n", distance);
    printf("���Ӫo�q�G%.2f ����\n", fuelNeeded);
    printf("�o���GNT$ %.2f\n", fuelCost);
    printf("�����O�GNT$ %.2f\n", parkingFee);
    printf("�q��O�GNT$ %.2f\n", tollFee);
    printf("\n");
    printf("�`��O�GNT$ %.2f\n", totalCost);

    return 0;
}
