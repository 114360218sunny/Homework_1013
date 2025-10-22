#include <stdio.h>

int main(void) {
    double distance;     // a) 一天行駛的總里程（公里）
    double fuelPrice;    // b) 每公升/加侖的汽油價格
    double kmPerLiter;   // c) 每公升可行駛多少公里（燃油效率）
    double parkingFee;   // d) 每日停車費
    double tollFee;      // e) 每日通行費（過路費）

    // 提示使用者輸入各項資料
    puts("請輸入以下資訊以計算您每日開車的總花費：");

    printf("a) 一整天的總里程數（公里）：");
    scanf_s("%lf", &distance);

    printf("b) 每公升汽油的價格：");
    scanf_s("%lf", &fuelPrice);

    printf("c) 每公升汽油可行駛的公里數：");
    scanf_s("%lf", &kmPerLiter);

    printf("d) 一天的停車費：");
    scanf_s("%lf", &parkingFee);

    printf("e) 一天的通行費（過路費）：");
    scanf_s("%lf", &tollFee);

    // 計算每日花費
    double fuelNeeded = distance / kmPerLiter;
    double fuelCost = fuelNeeded * fuelPrice;
    double totalCost = fuelCost + parkingFee + tollFee;

    // 顯示結果
    printf("\n");
    printf("行駛總距離：%.2f 公里\n", distance);
    printf("消耗油量：%.2f 公升\n", fuelNeeded);
    printf("油錢：NT$ %.2f\n", fuelCost);
    printf("停車費：NT$ %.2f\n", parkingFee);
    printf("通行費：NT$ %.2f\n", tollFee);
    printf("\n");
    printf("總花費：NT$ %.2f\n", totalCost);

    return 0;
}
