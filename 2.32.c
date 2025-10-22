#include <stdio.h>

double height;
double weight;

int main(void) {
    puts("請依序輸入身高(公尺)與體重(公斤)：");

    scanf_s("%lf", &height);
    scanf_s("%lf", &weight);

    double BMI = weight / (height * height);

    printf("\n您的 BMI 值為：%.2f\n\n", BMI);
    puts("Underweight :  less than 18.5");
    puts("Normal      :  between 18.5 and 24.9");
    puts("Overweight  :  between 25 and 29.9");
    puts("Obese       :  30 or greater");

    return 0;
}
