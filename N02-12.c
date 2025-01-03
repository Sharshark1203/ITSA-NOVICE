#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);
    printf("NT10=%d\n", money / 10);
    money = money % 10;
    printf("NT5=%d\n", money / 5);
    money = money % 5;
    printf("NT1=%d\n", money);
    return 0;
}