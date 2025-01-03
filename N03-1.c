#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);
    if (num > 0) {
        printf("正數\n");
    }
    if (num == 0) {
        printf("0\n");
    }
    if (num < 0) {
        printf("負數\n");
    }

    return 0;
}
