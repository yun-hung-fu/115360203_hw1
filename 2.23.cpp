#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("請輸入三個整數：");
    scanf("%d%d%d",&a,&b,&c);

    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;

    int smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    printf("最大值是：%d\n", largest);
    printf("最小值是：%d\n", smallest);
    
    return 0;
}
