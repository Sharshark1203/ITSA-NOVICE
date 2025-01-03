#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d+%d=%d\n", num1, num2, num1 + num2);
    printf("%d*%d=%d\n", num1, num2, num1 * num2);
    printf("%d-%d=%d\n", num1, num2, num1 - num2);
    if (num1 % num2 < 0) {
        printf("%d/%d=%d...%d\n", num1, num2, num1 / num2 - 1, num1 % num2 + num2);
    } else {
        printf("%d/%d=%d...%d\n", num1, num2, num1 / num2, num1 % num2);
    }

    return 0;
}
