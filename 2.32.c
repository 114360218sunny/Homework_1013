#include <stdio.h>

double height;
double weight;

int main(void) {
    puts("�Ш̧ǿ�J����(����)�P�魫(����)�G");

    scanf_s("%lf", &height);
    scanf_s("%lf", &weight);

    double BMI = weight / (height * height);

    printf("\n�z�� BMI �Ȭ��G%.2f\n\n", BMI);
    puts("Underweight :  less than 18.5");
    puts("Normal      :  between 18.5 and 24.9");
    puts("Overweight  :  between 25 and 29.9");
    puts("Obese       :  30 or greater");

    return 0;
}
