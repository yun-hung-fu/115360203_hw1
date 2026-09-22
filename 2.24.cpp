#include <stdio.h>

int main(void) {
    int num;
    printf("叫块俱计");
    scanf("%d",&num);

    if (num % 2 == 0) {
        printf("%d琌案计\n",num);
    } else {
        printf("%d琌计\n",num);
    }
    
    return 0;
}
