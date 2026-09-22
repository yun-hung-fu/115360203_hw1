#include <stdio.h>

int main(void) {
    double weight, heightMeters;
    printf("請輸入體重 (公斤)：");
    scanf("%lf", &weight);
    printf("請輸入身高 (公尺)：");
    scanf("%lf", &heightMeters);

    double bmi = weight / (heightMeters * heightMeters);
    printf("\n您的 BMI 值為：%.2f\n\n", bmi);
    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal:      between 18.5 and 24.9\n");
    printf("Overweight:  between 25 and 29.9\n");
    printf("Obese:       30 or greater\n");

    return 0;
}
