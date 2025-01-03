#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int times;
    scanf("%d", &times);

    for (int i = 0; i < times; i++) {
        double num = 0;
        scanf("%lf", &num);
        double result = num * num;
        result = round(result * 10) / 10;
        printf("%.1f\n", result);
    }

    return 0;
}
