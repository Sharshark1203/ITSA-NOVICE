#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int times;
    scanf("%d", &times);

    for (int i = 0; i < times; i++) {
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        int result = (num1 + num2) * (num1 + num2);
        printf("%d\n", result);
    }

    return 0;
}
