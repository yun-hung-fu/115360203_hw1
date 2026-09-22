#include <stdio.h>

int main(void) {
    float a,b,c,d,e;

    printf("請輸入一整天的總里程數：");
    scanf("%f",&a);
    printf("請輸入每加侖/公升汽油的價格：");
    scanf("%f",&b);
    printf("請輸入平均每加侖/公升能行駛的里程數：");
    scanf("%f",&c);
    printf("請輸入一天的停車費：");
    scanf("%f",&d);
    printf("請輸入一天的通行費（過路費）：");
    scanf("%f",&e);

    float fuelCost =(a/c)*b;
    float totalCost = fuelCost+d+e;

    printf("\n您一天開車去工作的總花費為：%.2f 元\n", totalCost);

    return 0;
}
